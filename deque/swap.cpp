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
/*********************************/
int main(){
    
    int ary[] = {1,2,3,4,5,6,7,8,9,10};
    Print<int>  print;

    deque<int> d1(ary, ary+7);
    deque<int> d2(ary+7, ary+10);

    cout<<"Deque d1 : ";
    for_each(d1.begin(),d1.end(),print);
    cout<<endl;
    cout<<"Size of d1 = "<<d1.size()
        <<endl<<endl;

    cout<<"Deque d2: ";
    for_each(d2.begin(), d2.end(), print);
    cout<<endl;
    cout<<"Size of d2 = "<<d2.size()
        <<endl<<endl;

    d1.swap(d2);
    cout<<"After swapping: "<<endl;
  
    cout<<"Deque d1: ";
    for_each(d1.begin(), d1.end(), print);
    cout<<endl;
    cout<<"Size of d1 = "<<d1.size()
        <<endl<<endl;

    cout<<"Deque d2: ";
    for_each(d2.begin(), d2.end(), print);
    cout<<endl;
    cout<<"Size of d2 = "<<d2.size()
        <<endl<<endl;

    return 0;

}
