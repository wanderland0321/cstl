#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int> l(5,0);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    cout<<"Size of list = "<<l.size()<<endl;

    int size = l.size();

    for(int i =0;i<size; i++){
       l.pop_front();
       cout<<"Size of list = "<<l.size()<<endl;
    }
    return 0;
}
