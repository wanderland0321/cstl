#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "Nobody is perfect";
    string s = "";
    char *ch = "abcdef";
  
    s.append(str, 0, 6);
    cout<<"s is : "<<s<<endl;

    string::iterator inpit1 = str.begin() +6;
    string::iterator inpit2 = str.end();

    s.append(inpit1, inpit2);
    cout<<"s is : "<<s<<endl;

    s.append(3,'!');
    cout<<"s is : "<<s<<endl;

    s.append(ch, 3);
    cout<<"s is : "<<s<<endl;

    s.append(ch, 3);
    cout<<"s is : "<<s<<endl;

    return 0;

}
