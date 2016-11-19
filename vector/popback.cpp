#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
class Print{
    public:
      void operator()(T& t){
           cout<<t<<" ";
      }
};
/******************************/
int main(){

    vector<int> v;
    Print<int> print;

    for(int i=0; i<5; i++){
       v.push_back(i+1);
    }

    while(!v.empty()){
       for_each(v.begin(), v.end(), print);
       cout<<endl;
       v.pop_back();
    }

    return 0;

}

