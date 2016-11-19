#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    cout<<"Vector is ";
    v.empty() ? cout <<"": cout<<"not ";
    cout<<"emtpy"<<endl;

    v.push_back(100);
    cout<<"Vector is ";
    v.empty() ? cout<<"": cout<<"not ";
    cout<<"empty"<<endl;

    return 0;
}
