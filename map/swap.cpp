#include <iostream>
#include <map>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

typedef map<int, list<int> > M;

void print(M m){

     M::iterator it = m.begin();

     list<int>::iterator Li;

     while(it != m.end()){

        cout<<"key : "<<(*it).first<<"; value : ";

        for(Li = (*it).second.begin(); Li != (*it).second.end(); Li++)
                cout<<*Li<<" ";

        it++;

     }

     cout<<endl;

}
//////////////////////////
int main(){

    list<int> L1, L2;

    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);

    copy(L1.begin(), L1.end(), back_inserter(L2));

    M m1, m2;

    m1.insert(M::value_type(1,L1));
    m2.insert(M::value_type(2,L2));
  
    cout<<"map m1: "<<endl;
    print(m1);
    cout<<"map m2: "<<endl;
    print(m2);

    if(m1 == m2)
        cout<<"maps m1 and m2 are equal"<<endl;
    else{
        cout<<endl<<"After m1.swap(m2)"<<endl;
        m1.swap(m2);
        cout<<"map m1: "<<endl;
        print(m1);
        cout<<"map m2: "<<endl;
        print(m2);
    }

    return 0;

}
