#include <iostream>
#include <deque>
#include <string>
#include <iterator>
using namespace std;

template<class T, class D>
class Member{
    private:
       T name;
       D sal;
    public:
       Member(T t, D d): name(t),sal(d){ }
       void print();
};
template<class T, class D>
void Member<T,D>::print(){
    cout<<name<<" "<<sal<<endl;
}
//********************************************
int main(){

    typedef Member<string, double> M;
    deque<M> d;
    d.push_back(M("Linda", 75000));
    d.push_back(M("Robert", 60000));

    deque<M>::iterator it = d.begin();
    cout<<"Entire deque: "<<endl;

    while(it!= d.end())
       (*it++).print();
    cout<<endl;

    cout<<"Return from front()"<<endl;
    d.front().print();

    return 0;
}
