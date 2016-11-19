#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "STL is founded created Dennis Ritchie";
    string s1  = "was";
    string s2  = "developed";
    string s3  = "Stepanov Alexander";

    cout<<"str is: "<<str<<endl;
  
    cout<<"replace 'is' for 'was' "<<endl;
    str.replace(4, 2, s1);
    cout<<"str is: "<<str<<endl;

    int n = str.find("c");
    int x = str.find("from");
    cout<<"n= "<<n<<endl;
    cout<<"x= "<<x<<endl;

//    str.replace(str.begin()+n, str.begin()+x, s2);

//    cout<<"str is: "<<str<<endl;

}
