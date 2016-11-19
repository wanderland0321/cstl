#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;

template<class T, class D>
class Member{
     private: 
        T name;
        D sal;
     public:
        Member(T t, D d): name(t), sal(d){ }
        void print();
}; 
template<class T, class D>
void Member<T, D>::print(){
     cout<<name<<" "<<sal<<endl;
}
/*********************************************/
int main(){
    typedef Member<string, double> M;
    list<M> l;

    l.push_back(M("Robert", 60000));
    l.push_back(M("Linda", 75000));
  
    list<M>::iterator it = l.begin();
    cout<<"Entire list: "<<endl;

    while(it != l.end())
        (*it++).print();
    cout<<endl;

    cout<<"Return from back()"<<endl;
    l.back().print();

    cout<<"Return from front()"<<endl;
    l.front().print();
    return 0;
}
