#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int ary[]= {1, 2, 3, 4, 5};
    deque<int> d;

    d.assign(ary, ary+5);
    copy(d.begin(), d.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    d.assign(3,100);
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    return 0;

}
