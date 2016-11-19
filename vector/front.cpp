#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

template<class T, class D>
class Member{
    private:
        T name;
        D sal;
    public:
        Member(T t, D d): name(t), sal(d){}
        void print();
};

template<class T, class D>
void Member<T,D>::print(){
   cout<<name<<" "<<sal<<endl;
}
//*******************************************
int main(){

    typedef Member<string, double> M;
    vector<M> v;

    v.push_back(M("Linda", 75000));
    v.push_back(M("Robert", 60000));

    vector<M>::iterator it = v.begin();
    cout<<"Entire vector: "<<endl;

    while(it != v.end())
         (*it).print();
    cout<<endl;

    cout<<"Return from front()"<<endl;
    v.front().print();
    return 0;
   
}
