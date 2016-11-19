#include <iostream>
#include <string>
using namespace std;

int main(){

    string str("C++ is best language");
    cout<<"str is: "<<str<<endl;

    int n = str.find_first_not_of(" ", 7);
    cout<<"first not of space character "<<"found at position "<<n<<endl;

    return 0;

}
