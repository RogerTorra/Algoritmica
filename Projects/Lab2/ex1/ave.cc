#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream> 
//funcio que retorna la mitjana d'un array
using namespace std;

int ave( int a[], int in, int n ) { 
	if (in == n -1){
		return a[in-1];
	}
	if (in==-1){
		return ave(a,0,n)/n;
	}		
	return a[in]+ ave(a,in+1,n);
	
}

int main() {
   int x = rand() % 10 + 1;
   int sec[x];
   for (int i=0;i<=sizeof(sec);i++){
   	sec[i] = rand() % 50;
   	cout << sec[i] << endl;
   }
   cout << "Average: " << ave(sec,-1,sizeof(sec)) << endl;
}