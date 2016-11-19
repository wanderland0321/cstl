#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

    typedef multimap<string, int> M;
    typedef M::value_type value;
    M m;

    m.insert(value("first",100));
    m.insert(value("second", 200));
    m.insert(value("thire", 300));
    m.insert(value("second", 400));
    m.insert(value("thire", 500));

    M::iterator it = m.begin();
    cout<<"m: "<<endl;
    while( it!=m.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }

    return 0;

}
