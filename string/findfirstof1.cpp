#include <iostream>
#include <string>
using namespace std;

int main(){

    string str("C++ is best language");
    string s = "be";

    cout<<"str is: "<<str<<endl;

    int n = str.find_first_of(s,2);
    cout<<"first 'be' found at position "<<n<<endl;

    n = str.find_first_of("l");
    cout<<"first character 'l' found at "<<"position "<<n<<endl;

    char charary[] = " bea";
    cout<<"charary[] = \" bea \""<<endl;
    n = str.find_first_of(charary, 0);
    cout<<"first character from charary "<<"found at position "<<n<<endl;
    cout<<"Note: position 4 is space"<<endl;

    n = str.find_first_of(" bae", 0, 3);
    cout<<"first character from charary "<<"found at position "<<n<<endl;

    return 0;
   
}
