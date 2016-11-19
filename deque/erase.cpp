#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){

    deque<int> d(10);
    deque<int>::iterator it;
    for(int i=0; i<10; i++)
       d[i] = i+1;

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, ", "));
    cout<<endl;
 
    it = d.begin() + 2;
    d.erase(it);

    copy(d.begin(), d.end(), ostream_iterator<int>(cout, ", "));
    cout<<endl;

    it=d.begin();
    d.erase(it, it+2);
    copy(d.begin(), d.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;

}
