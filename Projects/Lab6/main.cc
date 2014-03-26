
#include <iostream>


#include "sortedlist.h"

int main(){

	cout << "Test list" << endl;
	SortedList llista;
	llista.insert("test1");
	llista.insert("test2");

	cout << llista << endl;
	return 0;
}