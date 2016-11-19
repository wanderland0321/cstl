#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

int main ()
{
    list<int> l(5);
    iota(l.begin(),l.end(),1);

    list<int>::iterator It = l.begin();
    while ( It != l.end() )
        cout << *It++ << " ";
    cout << endl;

    // third element of the list
    It = l.begin() + 2 ;
    cout << *It << endl;

    return 0;
}
