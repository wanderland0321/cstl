#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(){

    string str;
    cout<<"Enter string (EOL=$) : ";
    getline(cin, str, '$');
    cout<<"Str is: "<<str<<endl;

    ifstream in("data.dat");
    vector<string> v;

    cout<<endl<<"Read data from file"<<endl;
    while( ! in.eof() ){
         getline(in, str);
         v.push_back(str);
    }
   
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
    cout<<endl;
    
    return 0;

}
