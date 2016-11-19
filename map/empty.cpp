#include <iostream>
#include <map>
using namespace std;

int main(){
    typedef map<int, int> M;
    M m;

    m[1] = 100;
    m[3] = 200;
    m[5] = 300;

    cout<<"values of map 'm': ";
    M::iterator it = m.begin();
    while(it != m.end()){
         cout<<(*it).first<<" "<<(*it).second<<" ";
         it++;
    }
    cout<<"size of m is: "<<m.size()<<endl;
    

    cout<<endl;
    cout<<"size of map = "<<m.size()<<endl;
    cout<<"map 'm' is "<<(m.empty() ?" ":"not " )<<"empty"<<endl<<endl;

    m.erase(m.begin(), m.end());
    cout<<"After m.erase(m.begin(), m.end())"<<endl;
    cout<<"size of map = "<<m.size()<<endl;
    cout<<"map 'm' is "<<(m.empty() ? " ":"not ")<<"empty"<<endl;


  
    return 0;

}
