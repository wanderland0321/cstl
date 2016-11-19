#include <iostream>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

template<class T>
class ID{

    private:
        T id, name;

    public:
        ID(T t, T n): id(t), name(n){ }
        void print(){
             cout.setf(ios::left);
             cout<<setw(15)<<name.c_str()<<id<<endl;
             cout.unsetf(ios::left);

        }
};
//////////////////////////////////
int main(){

    typedef ID<string> id;
    typedef map<int, id> M;
    typedef M::value_type vt;
 
    M m;
    m.insert(vt(1,id("000123","Shevchenko")));
    m.insert(vt(2,id("000124","Pushkin")));
    m.insert(vt(3,id("000125","Shakespeare")));

    m.insert(vt(3,id("000126","Smith")));

    cout<<"size of map 'm' = "<<m.size()<<endl;

    M::iterator it = m.begin();
    while( it != m.end()){
        cout.setf(ios::left);
        cout<<setw(3)<<(*it).first;
        (*it).second.print();
        it++;
    }

    return 0;

}
