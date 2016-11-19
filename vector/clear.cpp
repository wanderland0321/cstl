#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
class Print{
      public:
          void operator()(T& t){
              cout<<t<<" ";
          }
};
//***********************************
int main(){
    vector<int> v(10);
    Print<int> print;
 
    cout<<"Before fill v: ";
    for_each(v.begin(), v.end(), print);

   
    fill(v.begin(), v.end(), 5);
    
    cout<<"Vector v : ";
    for_each(v.begin(), v.end(), print);
    cout<<endl;
    cout<<"Size of v = "<<v.size()<<endl;
    
    cout<<"v.clear"<<endl;

    v.clear();
    cout<<"Vector v : ";
    for_each(v.begin(), v.end(), print);
    cout<<endl;
    cout<<"Size of v = "<<v.size()<<endl;
    cout<<"Vector v is ";
    v.empty() ? cout<<"":cout<<"not ";
    cout<<"empty"<<endl;

    return 0;   
}
