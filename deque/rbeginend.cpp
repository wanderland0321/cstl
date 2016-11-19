#include <iostream>
#include <iomanip>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

class ID
{
    friend bool operator < ( const ID&, const ID& );
        public:
        ID(string name,int score) : name(name), score(score) {}
        void display ()
        {
            cout.setf(ios::left);
            cout << setw(3) << score << name << endl;
        }
    private:
        string name; int score;
};
//-----------------------------------------------------  
// comperation function for sorting
bool operator < ( const ID& a, const ID& b )
{
    return a.score < b.score;
}
//-----------------------------------------------------  
typedef deque<ID> Deque; // new name for existing datatype

int main () 
{
    Deque d;
    Deque::iterator Iter;

    d.push_back(ID("Smith A",96));
    d.push_back(ID("Amstrong B.",91));
    d.push_back(ID("Watson D.",82));

    for ( Iter = d.begin(); Iter != d.end(); Iter++ )
        Iter->display();

    sort(d.begin(),d.end()); // sort algorithm
    cout << endl << "Sorted by Score" << endl;
    cout << "===============" << endl;

    for ( Iter = d.begin(); Iter != d.end(); Iter++ )
        Iter->display();
    
    cout << endl << "Reverse output" << endl;
    cout << "===============" << endl;
	
    Deque::reverse_iterator r = d.rbegin();	
    while ( r != d.rend() )
        cout << r->display();
    cout << endl;

    return 0;
}
