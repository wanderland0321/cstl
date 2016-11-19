#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

template<class T>
class Print{
    public:
       void operator()(T& t){
            cout<<t<<" ";
       }
};

int main(){
    int ary[] = { 3, 2, 5, 7, 3, 6, 7, 2, 4, 5};
    list<int> li(ary, ary+10);
    Print<int> print;

    
}
