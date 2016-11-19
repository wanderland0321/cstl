#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
   
    string str[] = {"Alex", "John", "Robert"};

    vector <int> v1;
   
    vector<int> v2(10);

    vector<int> v3(10,0);

    vector<string> v4(str+0, str+3);

    vector<string>::iterator sit = v4.begin();
    while(sit != v4.end())
        cout<<*sit++<<" ";
    cout<<endl;
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;


    vector<string> v5(v4);
    for(int i=0; i<3; i++)
       cout<<v5[i]<<" ";
    cout<<endl;

    return 0;
   
}
