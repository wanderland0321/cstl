#include <iostream>
#include <vector>
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
//*****************************
int main(){

    int ary[5];
    fill(ary, ary+5, 1);

    vector<int> v;
    vector<int>::iterator it;
    Print<int> print;

    copy(ary, ary+5, back_inserter(v));
    cout<<"vector v: ";
    for_each(v.begin(), v.end(), print);
    cout<<endl;
   
    it = v.begin();
    cout<<"v.insert(it, 5): ";
    v.insert(it, 5);
    for_each(v.begin(), v.end(), print);
    cout<<endl;

    it = v.begin() + 5;
    cout<<"v.insert(it, ary+2, ary+5): ";
    v.insert(it, ary+2, ary+5);
    for_each(v.begin(), v.end(), print);
    cout<<endl;

    return 0;
    
}
