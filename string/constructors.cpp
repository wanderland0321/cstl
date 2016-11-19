#include <iostream>
#include <string>
using namespace std;

int main(){

    char *line = "short line for testing";

    string s1;
    s1 = "Anatoliy";
    cout<<"s1 is: "<<s1<<endl;

    string s2(s1);
    cout<<"s2 is: "<<s2<<endl;

    string s3(line);
    cout<<"s3 is: "<<s3<<endl;

    string s4(line, 10);
    cout<<"s4 is: "<<s4<<endl;

    string s5(s3, 6, 4);
    cout<<"s5 is: "<<s5<<endl;

    string s55(line, 6, 4);
    cout<<"s55 is: "<<s55<<endl;

    string s6(15, '*');
    cout<<"s6 is: "<<s6<<endl;

    string s7(s3.begin(), s3.end()-5);
    cout<<"s7 is: "<<s7<<endl;

    string s8="Anatoliy";
    cout<<"s8 is: "<<s8<<endl;

    return 0;    
    

} 
