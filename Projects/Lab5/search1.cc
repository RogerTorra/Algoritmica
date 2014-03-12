
#include "search.h"

bool search( int array[], int len, int element ){
   calls++;
   if(len == 0){
   	return false;
   }
   else{
	   	if(array[len]==element){
	   		return true;
	   	}
	   	else{
	   		return search(array,len-1,element);
	   	}
	}
}
