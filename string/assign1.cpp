#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "Nobody is perfect";
    string s = "";
    char *ch = "Robert Frost";

    s.assign(str);
    cout<<"s is : "<<s<<endl;

    s.assign(str, 10, 7);
    cout<<"s is : "<<s<<endl;

    s.assign(ch, 6);
    cout<<"s is : "<<s<<endl;

    s.assign(ch);
    cout<<"s is : "<<s<<endl;

    s.assign(str.begin(), str.end());
    cout<<"s is : "<<s<<endl;

    s.assign(17, '*');
    cout<<"s is : "<<s<<endl;

    return 0;

}
