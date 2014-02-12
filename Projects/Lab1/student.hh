
#include <string>
#include <iostream>

using namespace std;

const int NumGrades = 5, MaxStudents = 10;

struct StudentInfo {
   string id;
   int grades[ NumGrades ];
   double avGrade;
};

int readStudents( istream&, StudentInfo[] );
StudentInfo& highestAverage( StudentInfo info[], int numStudents = MaxStudents );

