#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream> 
//funcio que retorna el factorial
using namespace std;

int fact( int a) { 
	if (a == 0){
		return 1;
	}	
	return a * fact (a-1);
	
}

int main() {
   int x = rand() % 10 + 1;
   cout << "Factorial de  "<< x << " = "<< fact(x) << endl;
}