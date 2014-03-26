
#include <iostream>
#include <fstream>
#include "sort.h"

using namespace std;

int calls = 0;

istream& pick_input( int argc, char *filename ) {
  if ( argc < 2 ) return cin;
  ifstream *file = new ifstream();
  file->open( filename );
  return *file;
}

int main(int argc, char *argv[]) {
  int element, times, *array;
  if(argc <2 ){
    cout << "USAGE: ./smartdb [input] [output] \nHELP: ./smartdb -h" <<endl;
    return 1;
  }
  if( (argv[1]=="-h") == 0){
    cout << "USAGE: ./smartdb [input] [output]" <<endl;
    return 1;
  }

  istream& input = pick_input( argc, argv[1] );
  if (!input) { cerr << "Unable to open file" << endl; return 1; }

  //search( array, times, element );
  calls = 0;

  cout << "calls: " << calls << endl;
  mergesort<double> test1("data","testResults.txt");
  return 0;
}
