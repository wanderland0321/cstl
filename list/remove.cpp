#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

template<class T, class D>
class Salary{

     private:
         T id;
         D sal;
     public:
         Salary(T t): id(t){}
         Salary(T t, D d): id(t), sal(d) { }
         void print();
     friend bool operator == (const Salary &s1, const Salary &s2);
     
};

template<class T, class D>
void Salary<T, D>::print(){
     cout<<id<<" "<<sal<<endl;
}

template<class T, class D>
bool operator ==( Salary<T, D>  &s1, Salary<T, D> &s2) {
     return s1.id == s2.id;
}
//////////////////////////////////////////
int main(){
    typedef Salary<string, double> S;
    typedef list<S> L;

    L l;
    l.push_back(S("012345",70000));
    l.push_back(S("012346",60000));
    l.push_back(S("012347",72000));
   
    L::iterator it = l.begin();
    while( it != l.end())
         (*it++).print();
    cout<<endl;

    S s("012345");
    l.remove(s);

    it = l.begin();
    while( it != l.end())
         (*it++).print();
    cout<<endl;
    
    return 0;

}

