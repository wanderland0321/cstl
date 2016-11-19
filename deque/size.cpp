#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

template<class T>
class Print{
   public:
      void operator()(T& t){
           cout<<t<<" ";
      }
};
/*******************************/
int main(){
    deque<char> d(5);
    Print<char> print;
    
    cout<<"Size of d = "<<d.size()<<endl;

    fill(d.begin(), d.end(), '*');
    for_each(d.begin(), d.end(), print);
    cout<<endl;

    for(int i=0; i<d.size(); i++)
       cout<<d[i]<<" ";
    cout<<endl;
    
    for(int i=0; i<5; i++){
       cout<<"Size of d = ";
       for_each(d.begin(), d.end(), print);
       cout<<endl;

       d.pop_back();
    }

    return 0;
}
