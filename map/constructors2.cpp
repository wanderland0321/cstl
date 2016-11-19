#include <iostream>
#include <map>
using namespace std;

int main(){
    typedef map<char, char, less<char> > M;
    M m1;

    m1.insert(M::value_type('a','B'));
    m1.insert(M::value_type('k','C'));
    m1.insert(M::value_type('d','A'));
 
    M::iterator it = m1.begin();
    cout<<endl<<"m1: "<<endl;
    while(it != m1.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    } 

    M m2(m1);
    it = m2.begin();
    cout<<endl<<"m2: "<<endl;
    while( it != m2.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }

    M m3(m2.begin(), m2.end());
    it = m3.begin();
    cout<<endl<<"m3: "<<endl;
    while( it != m3.end()){
        cout<<(*it).first<<" - "<<(*it).second<<endl;
        it++;
    }

    return 0;

} 
