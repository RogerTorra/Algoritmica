#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream> 
//funcio que retorna el maxim d'un array de forma recursiva
using namespace std;

int maxim( int a[], int n ) { 
	int max;
	if (n <= 1){
		return a[0];
	}
	else{
		max = maxim(a,n-1);
		return a[n]>max? a[n]:max;
	}
}

int main() {
   int x = rand() % 10 + 1;
   int sec[x];
   for (int i=0;i<=sizeof(sec);i++){
   	sec[i] = rand() % 50;
   	cout << sec[i] << endl;
   }
   cout << "Max: " << maxim(sec,sizeof(sec)) << endl;
}