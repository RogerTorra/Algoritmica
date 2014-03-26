#include <deque>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

template<class T> class mergesort{
	public:
		mergesort(string inFile, string outFile);
	private:
		int readInFile(ifstream &inputFile);
		void printFile(string inFile,deque<T> &data,bool apend);
		string tostring(int number);
		int max_deque_size;
};

//mergesort()
template<class T> mergesort<T>::mergesort(string inFile,string outFile){
	int numFiles;
	ifstream inputFile;

	this->max_deque_size=5;
	try{
		inputFile.open(inFile.c_str());
	}catch(int e){
		cout << "Error opening file!! \n ERROR" << e;
	}

	cout << "Reading input file...\n";
	numFiles = readInFile(inputFile);
	cout << "Done! \n";
	cout << numFiles <<" num files." << endl;

	inputFile.close();
}

/*tostring()
string tostring(int number){
	stringstream ss;
	ss << number;
	return ss.str();
}*/

//readInFile()
template<class T> mergesort<T>::readInFile(ifstream &inputFile){
	deque<T> data;
	T temp;
	int fileOut = 0;
	int numFiles;
	string fileName;

	for(numFiles = 0; inputFile.good(); numFiles++){
		fileName = "sortfile_";
		fileName += to_string(numFiles);
		for(int i =0;(i<max_deque_size && inputFile >> temp); i++){
			data.push_back(temp);
		}
		//data = SORT(data)
		printFile(fileName,data,false);
		data.clear();
		cout << "*"; 
		}
	cout << endl;
	return numFiles + 1;
}

//printFile()
template<class T> void mergesort<T>::printFile(string inFile,deque<T> &data,bool apend){
	ofstream outFile;
	if(apend){
		outFile.open(inFile.c_str(), ios::app);
	}else{
		outFile.open(inFile.c_str());
	}

	while(data.size() > 0){
		outFile << data.front() << endl;
		data.pop_front();
	}

	outFile.close();
}
