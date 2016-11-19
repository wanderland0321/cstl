#include <iostream>
#include <exception>
using namespace std;

int main(){

    const unsigned long SIZE = 50000000000000;
    char *ptr[10];

    try{
       for(int counter = 0; counter<10; counter++){
            ptr[counter] = new char[SIZE];
            cout<<"Memory for ptr["<<counter<<"] is allocated"<<endl;
       }
    } catch(exception & e){
       cout<<"Exception: ";
       cout<<e.what()<<endl;
       return 1;
    }

    for(int i=0; i<10; i++)
       delete [] ptr[i];

    cout<<"End"<<endl;

    return 0;

}
