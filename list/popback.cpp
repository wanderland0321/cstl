#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    list<int> l(5);
    iota(l.begin(), l.end(), 1);
  
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    while( !l.empty()){
        l.pop_back();
        copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
        cout<<endl;
    }

    return 0;
}
