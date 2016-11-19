#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l(10);
    cout<<"Size of list l = "<<l.size();
    cout<<endl;

    l.resize(100);
    cout<<"After l.resize(100)"<<endl;
    cout<<"Size of list l = "
        <<l.size()<<endl;

    l.resize(5);
    cout<<"After l.resize(5)"<<endl;
    cout<<"Size of list l = "<<l.size()<<endl;

    return 0;

}
