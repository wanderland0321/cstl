#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l(5,10);
    cout<<"Size of list = "
        <<l.size()<<endl;
 
    l.clear();
    cout<<"After l.clear() size of list = "
        <<l.size()<<endl;

    return 0;       
}
