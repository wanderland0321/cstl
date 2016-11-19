#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str[]={"Alex", "John", "Robert"};

    deque<int> d1;

    deque<int> d2(10);

    deque<int> d3(10,0);

    deque<string> d4(str+0, str+3);
    deque<string>::iterator sit = d4.begin();
    while(sit != d4.end())
        cout<<*sit++<<" ";
    cout<<endl;

    deque<string> d5(d4);
    for(int i=0; i<3; i++)
       cout<<d5[i]<<" ";
    cout<<endl;

    return 0;    
}
