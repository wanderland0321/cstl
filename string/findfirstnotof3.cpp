#include <iostream>
#include <string>
using namespace std;

int main(){

    string str("C++ is best language");
    string s = "C++";
  
    cout<<"str is : "<<str<<endl;

    int n = str.find_first_not_of("CBCD", 0, 3);
    cout<<"first not 'C' is found at position "<<n<<endl;

    n = str.find_first_not_of(s);
    cout<<"first not of C++ is found "<<"at position "<<n<<endl;

    return 0;

}
