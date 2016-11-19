#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

template<class T>
class Print{
    public:
        void operator()(T& t){
            cout<<t<<" ";
        }
};
/********************************/
int main(){
    deque<int> d(10);
    Print<int> print;

    fill(d.begin(), d.end(), 5);
    cout<<"Deque d: ";
    for_each(d.begin(), d.end(), print);
    cout<<endl;
    copy(d.begin(), d.end(), ostream_iterator<int>(cout, ", "));
    cout<<endl;
    cout<<"Size of d = "<<d.size()
        <<endl;

    cout<<"d.clear"<<endl;
    d.clear();

    cout<<"Deque d: ";
    for_each(d.begin(), d.end(), print);
    cout<<endl;
    cout<<"Size of d = "<<d.size()<<endl;
    cout<<"Deque d is ";
    d.empty() ? cout<<" ": cout<<"not ";
    cout<<"empty"<<endl;

    return 0;
}
