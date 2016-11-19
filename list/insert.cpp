// insert elements into the list
#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

template <class T>
void print(list<T>& l)
{
    list<int>::iterator It = l.begin();
    while ( It != l.end() )
    {
        cout << *(It++) << " ";
    }
    cout << endl;
}
//====================================
int main () 
{
    list<int> li1(10,0);
    list<int> li2(5);
    list<int>::iterator It;
    iota(li2.begin(),li2.end(),1);

    cout << "li1 : ";
    print(li1);
    cout << "li2 : ";
    print(li2);

    It = li1.begin();
    // value of 20 at the pos It
    li1.insert(++It,20);
    cout << "li1 : ";
    print(li1);
    
    // two value of 25 at the beginning
    li1.insert(li1.begin(),2,25);
    cout << "li1 : ";
    print(li1);

    // contents of li2 at the end of li1
    li1.insert(li1.end(),li2.begin(),li2.end());
    cout << "li1 : ";
    print(li1);

    return 0;
}
