
#include <iostream>
#include <fstream>

#include "search.h"

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
 
  istream& input = pick_input( argc, argv[1] );
  if (!input) { cerr << "Unable to open file" << endl; return 1; }

  input >> element;

  input >> times;
  array = new int[ times ];
#ifndef NDEBUG
  cout << "Times: " << times << endl;
#endif
  for( int i = 0; i < times; i++ ) {
    input >> array[ i ];
    if ( input.eof() ) { break; }
    if ( input.fail() ) { cerr << "Failed" << endl; break; }
#ifndef NDEBUG
    cout << array[i] << endl;
#endif
  }

  search( array, times, element );

  cout << "calls: " << calls << endl;

  return 0;
}
