#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str("C++ is best language");
    int pos1, pos2;

    pos1 = str.find("best");
    cout<<"Word best is found on position "<<pos1<<endl;
  
    pos2 = str.find("best", pos1+1);
    cout<<"Word best is found on position "<<pos2<<endl;

    pos1 = str.find("g ");
    cout<<"First character 'g' found on position "<<pos1<<endl;

    string s = "is  ";
    pos1 = str.find(s);
    cout<<"Word 'is' is found on position "<<pos1<<endl;

    return 0;
    
}
