#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(5,0);

    cout<<"Size of v = "<<v.size()<<endl;
    cout<<"Capacity v = "<<v.capacity()<<endl;
    cout<<"Value of each element is - ";
    for(int i = 0; i<v.size(); i++)
       cout<<v[i] << " ";
    cout<<endl;

    v[0] = 5;
    v[1] = 8;
    v.push_back(3);
    v.push_back(7);
    cout<<endl;

    cout<<"Size of v = "<<v.size()<<endl;
    cout<<"Capacity of v "<<v.capacity()<<endl;
    cout<<"Value of each element is - ";
    for(int i = 0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl<<endl;

    v.reserve(100);
    cout<<"Size of v1_int = "<<v.size()<<endl;
    cout<<"Capacity v1_int = "<<v.capacity()<<endl;

    int size = sizeof(v);
    cout<<"sizeof v = "<<size<<endl;

    return 0;
}
