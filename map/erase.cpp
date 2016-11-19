#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map<string, int, less<string> > M;

void print(M& m){
     M::iterator it = m.begin();
     cout<<"map: "<<endl;
     while(it != m.end()){
         cout<<(*it).first<<" - ";
         cout<<(*it).second<<endl;
         it++;
     }
}

int main(){

    typedef M::value_type v_t;
   
    M m;
    m.insert(v_t("AAA", 1));
    m.insert(v_t("BBB", 2));
    m.insert(v_t("CCC", 3));

    m["DDD"] = 4;
    m["EEE"] = 5;

    print(m);

    m.erase("BBB");
    print(m);

    M::iterator it;
    it = m.find("DDD");
    m.erase(it);
    print(m);

    it = m.find("CCC");
    m.erase(m.begin(), ++it);
    print(m);

    return 0;

}
