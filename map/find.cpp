#include <iostream>
#include <map>
using namespace std;

int main(){

    typedef map<int, char> M;
    char ch = 'A';
    M m;

    for(int i = 0; i<5; i++)
        m[i] = ch++;

    M::iterator it = m.begin();
    cout<<"map m: "<<endl;

    while(it != m.end()){
         cout<<(*it).first<<" - "<<(*it).second<<endl;
         it++;
    }

    it = m.find(4);
    if(it != m.end())
       cout<<"element key '4' has value "<<(*it).second<<endl;
    else
       cout<<"element key '4' not found"<<endl;

    return 0;

}
