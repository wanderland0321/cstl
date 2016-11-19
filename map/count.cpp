#include <iostream>
#include <map>
#include <list>
#include <numeric>
using namespace std;

int main(){

    list<int> L1(3), L2(3);
    iota(L1.begin(), L1.end(), 1);
    iota(L2.begin(), L2.end(), 4);
    
    copy(L1.begin(), L1.end(), ostream_iterator<int>(cout," "));
    cout<<endl;
    copy(L2.begin(), L2.end(), ostream_iterator<int>(cout," "));  
    cout<<endl;

    typedef map<int, list<int> > M;
    M m;
    m.insert(M::value_type(1,L1));
    m.insert(M::value_type(2,L2));

    M::iterator it;
    list<int>::iterator Li;
    for(it = m.begin(); it != m.end(); it++){
         cout<<"map "<<(*it).first<<": ";
         for(Li = (*it).second.begin(); Li != (*it).second.end(); Li++)
              cout<<*Li<<" ";
         cout<<endl;
    }

    int n = m.count(2);
    cout<<"count of element with key '2'(0 or 1) is "<<n<<endl;

    return 0;
    
}
