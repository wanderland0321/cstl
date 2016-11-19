#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "C++ is best computer language";
    cout<<"str is: "<<str<<endl;

    string::reverse_iterator it = str.rbegin();
    while( it != str.rend())
          cout<<*it++;
    cout<<endl;

    return 0;

}
