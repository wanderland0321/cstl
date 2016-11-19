#include <iostream>
#include <set>
using namespace std;

template<class T>
void truefalse(T t){
     cout<<(t?"True":"Fale")<<endl;
}
/////////////////////////////////////
int main(){

    set<int> s;
   
    cout<<"s.key_comp()(1,2) returned";
    truefalse(s.key_comp()(1,2));

    cout<<"s.key_comp()(2,1) returned";
    truefalse(s.key_comp()(2,1));
 
    cout<<"s.key_comp()(1,1) returned";
    truefalse(s.key_comp()(1,1));

    return 0;

}
