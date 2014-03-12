
#include <string>
#include <iostream>
//capcelera
using namespace std;
namespace university{
	const int NumGrades = 5, MaxStudents = 10;
	/*
	struct StudentInfo {
	   string id;
	   int grades[ NumGrades ];
	   double avGrade;
	};


	int readStudents( istream&, StudentInfo[] );
	StudentInfo& highestAverage( StudentInfo info[], int numStudents = MaxStudents );*/


	class StudentInfo{
		public:
		string id;
	  	int grades[ NumGrades ];
	   	double avGrade;	
		StudentInfo(string _id,int _grades[],double _avGrade):id( _id),avGrade( _avGrade){
			for(int i=0 ;i <= NumGrades ;i++ ){
				grades[i] = _grades[i];
			}
		}

	};
	class Course{
	  StudentInfo info[ MaxStudents ];
	  int numStudents;

	public:
		Course(){}
		void addStudent( StudentInfo );
		int readStudents(std::istream&);
		StudentInfo& highestAverage();
	};

}
