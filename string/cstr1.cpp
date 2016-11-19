#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "Anatoliy";
    char *ary = new char[str.length()+1];

    strcpy(ary, str.c_str() );
    cout<<ary<<endl;

    return 0;

}
