
#include "search.h"

bool binarySearch(int sortedArray[], int first, int last, int element) {
	calls++;
   if(last==first){ return false;}
   if (first <= last) {
       int mid = (first + last) / 2;
       if (element == sortedArray[mid]) 
           return true;   // found it.
       else if (element < sortedArray[mid]) 
           return binarySearch(sortedArray, first, mid-1, element);
       else
           return binarySearch(sortedArray, mid+1, last, element);
   }
}