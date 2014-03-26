# include <string>
# include <ostream>
#include <vector>
using namespace std ;
/*
* List class
*
* A List is a collection of strings in alphabetical order
*
* Operations :
* 	constructor Initialize the list to be empty .
* 	insert Add a given string to the list .
* 	print Print ( to the given ostream ) the strings
	in the list in
* 	order , enclosed in square brackets ,
	separated by spaces .
* 	lookup Return the number of times a given string
	occurs in the list .
*/
class List {

private :
	struct ListNode {
		string data ;
		ListNode * next ;
	};

	// pointer to the first node of the list
	ListNode * head ;
	ListNode * end ;

	int mid;

public :
	// constructor
	List () : head (NULL) {
		head = NULL;
		mid = 0;
	}
	// Single colon operator to initialize members

	// modifiers
	void insert (const string data){
			ListNode *temp = new ListNode;
			temp -> data = data;
			temp -> next = head;
			head = temp;
			mid++;
	}

	// other operations
	int size () const{
		return mid;
	};

	bool lookup (const string) const ;

	void print (ostream & os) const {
		ListNode *temp = head;
		while (temp != NULL) {
			os << temp -> data << endl;
			temp = temp -> next;
		}
	};

	string returnArray(int size){
		ListNode *temp = head;
		vector<char> v;
		int c=0;

		while (temp != NULL) {
			temp -> data;
			v[c] = temp;
			temp = temp -> next;
			c++;
		}
		return v;
	}


};