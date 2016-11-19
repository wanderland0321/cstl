#include <iostream>
#include <string>
using namespace std;

int main(){

    string str("C++ is best language");
    string s = "langue";
    int pos = str.length() - 1;
    cout<<"str is: "<<str<<endl;

    int n = str.find_last_not_of(s,pos);
    cout<<"last_not_of 'langue' found at position "<<n<<endl;

    n = str.find_last_not_of("e");
    cout<<"last_not_of 'e' found at position "<<n<<endl;

    char ary[] = "be";
    n = str.find_last_not_of(ary);
    cout<<"last_not_of 'be' found at position "<<n<<endl;

    return 0;

}
