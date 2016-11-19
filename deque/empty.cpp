#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;
    cout<<"Deque is ";
    d.empty() ? cout<<" " : cout<<"not ";
    cout<<"empty"<<endl;

    d.push_back(100);
    cout<<"Deque is ";
    d.empty() ? cout<<" ": cout<< "not ";
    cout<<"empty"<<endl;

    return 0;

}
