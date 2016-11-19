#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int ary[ ] = { 1,2,3,4,5 };
    list<int> l;

    l.assign(ary, ary+5);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    l.assign(3,100);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;   
 
}
