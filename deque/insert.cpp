#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>
using namespace std;

template<class T>
class Print{
     public:
        void operator()(T& t){
            cout<<t<<" ";
        }
};
/**********************************/
int main(){
    int ary[5];
    fill(ary, ary+5, 1);

    deque<int> d;
    deque<int>::iterator it;
    Print<int> print;
    
    copy(ary, ary+5, back_inserter(d));
    cout<<"deque d  : ";
    for_each(d.begin(), d.end(), print);
    cout<<endl;

    it=d.begin();
    cout<<"d.insert(it,5) :";
    d.insert(it, 5);
    for_each(d.begin(), d.end(), print);
    cout<<endl;

    it = d.begin()+5;
    cout<<"d.insert(it, ary+2, ary+5)";   
    d.insert(it, ary+2, ary+5);
    for_each(d.begin(), d.end(), print);
    cout<<endl;

    it = d.end() - 2;
    cout<<"d.insert(it, 2, 20) : ";
    d.insert(it, 2, 20);
    for_each(d.begin(), d.end(), print);
    cout<<endl;

    return 0;

}


