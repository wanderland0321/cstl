#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> v(10);
    cout<<"Size of v = "
        <<v.size()<<endl;
    cout<<"Capacity of v = "
        <<v.capacity()<<endl;

    v.resize(100);
    cout<<"After resizing: "<<endl;
    cout<<"Size of v = "
        <<v.size()<<endl;
    cout<<"Capacity of v = "
        <<v.capacity()<<endl;

    return 0;

}
