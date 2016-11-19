#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    typedef map<int, char, less<char> > M;
    typedef M::value_type v_t;

    M m1, m2;
    char ch = 'A';
    for(int i = 0; i<3; i++){
       m1[i+1] = ch+i;
       m2[i+4] = ch+i+3;
    }

    cout<<"m1: "<<endl;
    M::iterator it = m1.begin();
    while(it != m1.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }

    cout<<"m2: "<<endl;
    it = m2.begin();
    while( it != m2.end()){
         cout<<(*it).first<<" - "<<(*it).second<<endl;
         it++;
    }

    m1.insert(v_t(5,'E'));
    it = m2.find(6);
    m1.insert(*it);

    cout<<"m1: "<<endl;
    it = m1.begin();
    while(it != m1.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }

    m1.insert(m2.begin(), m2.end());
    cout<<"m1: "<<endl;
    while(it!=m1.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }
 
    return 0;


}
