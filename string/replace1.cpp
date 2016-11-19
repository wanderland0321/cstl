#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "STL is created from Dennis Ritchie";
    string s1  = "was";
    string s2  = "developed";
    string s3  = "Stepanov alexander";
    cout<<"str is: "<<str<<endl;;
 
    cout<<"replace 'is' for 'was'" <<endl;
    str.replace(4,2,s1);
    cout<<"str is: "<<str<<endl;

    cout<<"replace 'created' for 'developed'"<<endl;
    int n = str.find("c");
    int x = str.find("from")-1;

    str.replace(str.begin()+n,str.begin()+x, s2);
    cout<<"str is: "<<str<<endl;

        
}
