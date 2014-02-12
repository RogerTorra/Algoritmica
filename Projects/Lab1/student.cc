
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream> 
#include "student.hh"
using namespace std;

int readStudents( istream& input, StudentInfo info[] ){
    int numRecords = 0;
    string line,nom;   
    int nota;
	while (getline(input, line))
	{
		stringstream ss(line);
		int i = 0;
		ss >> nom;
		//cout << nom << endl;
		info[numRecords].id = nom;
		while(ss >> nota){   
			info[numRecords].grades[i] = nota;
			//cout<<nota<< endl;
			i++;

    	}
		numRecords++; 	 
	}
    return numRecords;
}

StudentInfo& highestAverage( StudentInfo info[], int numStudents ){
  StudentInfo *max = &info[0];
  //max.grades = &info[0].grades;
  for (int x=0; x<=sizeof(max); x++ ){
  	cout << "lol" << endl;
  }
  return *max;
}
