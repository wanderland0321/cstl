#include <iostream>
#include <string>
using namespace std;

int main(){

    string str("C++ is best language");
    string s = "g";
    cout<<"str is: "<<str<<endl;
    cout<<"s is: "<<s<<endl;

    int n = str.find_last_of(s);
    cout<<"last_of '"<<s<<"' faund"<<" at position "<<n<<endl;

    n = str.find_last_of(' ');
    cout<<"last of ' ' faund"<<" at position "<<n<<endl;

    n = str.find_last_of(" la");
    cout<<"last of \" la\" faund"<<" at position "<<n<<endl;

    return 0;
    
}
