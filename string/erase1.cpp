#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str, s;
    for(char ch = 'a'; ch<='z'; ch++)
        str.append(1,ch);

    s = str;
    cout<<"str is: "<<str<<endl;
    cout<<"s is: "<<str<<endl;

    str.erase(0,13);
    cout<<"Erased range fron str: "<<str<<endl;
    str = s.erase(13,13);
    cout<<"Erased range from s : "<<str<<endl;

    cout<<endl<<"Erase one, second character from s"<<endl;
    s.erase(s.begin()+1);
    cout<<"s is : "<<s<<endl;

    s.erase(s.begin(), s.begin()+4);
    cout<<"s is : "<<s<<endl;

    return 0;
}
