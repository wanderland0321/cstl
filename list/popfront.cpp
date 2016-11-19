#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){

    list<int> l(5,0);
    iota(l.begin(), l.end(), 1);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    cout<<"Size of list = "
        <<l.size()<<endl;

    int size = l.size();
    while(!l.empty()){
       l.pop_front();
       copy(l.begin(),l.end(),ostream_iterator<int>(cout," "));
       cout<<endl;
       cout<<"Size of list = "
           <<l.size()<<endl;
    }

    return 0;
    
}
