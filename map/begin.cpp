#include <iostream>
#include <map>
using namespace std;

int main(){
    typedef map<int, char, greater<int> > M;
    typedef M::value_type v_t;
    M m;

    m.insert(v_t(2,'B'));
    m.insert(v_t(3,'C'));
    m.insert(v_t(1,'A'));

    M::iterator it = m.begin();
    cout<<"m: "<<endl;
    while( it != m.end()){
         cout<<(*it).first<<" - "<<(*it).second<<endl;
         it++;
    }

    return 0;

}
