
#include <string>
#include <fstream>

using namespace std;

/*
 *  SortedList class
 *    
 *  A SortedList is a collection of strings in alphabetical order
 * 
 *  Operations:
 *     constructor Initialize the list to be empty.
 *     Insert      Add a given string to the list.
 *     Print       Print (to the given ostream) the strings in the list in
 *                 order, enclosed in square brackets, separated by spaces.
 *     Lookup      Return the number of times a given string occurs in the list.
 */
class SortedList {

  public:
    // constructor
    SortedList(){
        head = NULL;
    }

    // destructor
    ~SortedList(){
        /*
        while(head != NULL) {
            struct ListNode* n = head->next;
            delete head;
            head = n;
        }
        */
    }

    // copy constructor
    SortedList( SortedList& );

    SortedList& operator=( SortedList& );

    // modifiers
    void insert(const string& dada){
        struct ListNode* nou = new ListNode;
        nou->data = dada;
        nou->next = head;
        head = nou;
    }

    // other operations
    bool lookup(const string&) const;
    int occurrences(const string&) const;
    friend ostream& operator<<(ostream&, const SortedList&);

  private:
    struct ListNode {
       string data;
       ListNode *next;
    };
    
    // pointer to the first node of the list
    ListNode *head;
};

ostream& operator<<(ostream& os, const SortedList& llista) {
   SortedList::ListNode* nou = llista.head;
   while(nou != NULL){
    os << nou->data << endl;
    nou = nou->next;
   }
   return os;
};
