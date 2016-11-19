#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "C++ is best computer language";
    cout<<"str is: "<<str<<endl;

    cout<<"Length of str is: "<<str.length()<<endl;
    cout<<"Max isze of str is: "<<str.max_size()<<endl;
    cout<<"Capacity of str is: "<<str.capacity()<<endl;

    return 0;

}
