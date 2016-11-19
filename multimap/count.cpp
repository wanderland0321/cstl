#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main(){
    typedef multimap<char, string> M1;
    typedef M1::value_type vt1;
    M1 m1;
   
    typedef multimap<string, char, less<string> > M2;
    typedef M2::value_type vt2;
    M2 m2;

    string word;
    int counter = 0;
    
    ifstream in("/usr/share/dict/words");
    if(in.good()){
        while(1){

        }

    }
}
