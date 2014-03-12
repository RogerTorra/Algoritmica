
#include <cstdlib>
#include <fstream>

#include "student.hh"

int main(int numargs, char *args[]) {
  ifstream inFile;

  // make sure the file name was given as a command-line arg
  if (numargs < 2) {
    cerr << "usage: " << args[0] << " <file name>" << endl;
    exit(1);
  }

  // open the file
  inFile.open(args[1]);

  // make sure the open worked
  if (inFile.fail()) {
     cerr << "Unable to open " << args[1] << endl;
      exit( 1 );
  }
  

  //int numStudents = readStudents( inFile, info );
  //StudentInfo max = highestAverage( info, numStudents );
  Course *c = new Course();
  int numStudents = c->readStudents( inFile);
  cout << "Student " << max.id << " has the highest average: " << max.avGrade << endl;
  inFile.close();
  return 0;
}
