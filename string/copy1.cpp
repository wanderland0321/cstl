#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "First Name: Robert";
    char fname[255];
    cout<<"str is : "<<str<<endl;

    int n = str.find(':');

    str.copy(fname, n+1, 0);
    fname[n+1] = 0;

    cout<<"fname is : "<<fname<<endl;

    return 0;

}
