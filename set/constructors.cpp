#include <iostream>
#include <set>
using namespace std;

int main(){

    int ary[ ]= { 5, 3, 7, 5, 2, 3, 7, 5, 5, 4 };
    set<int> s1;
    set<int, greater<int> > s2;
    for(int i=0; i<sizeof(ary)/sizeof(int); i++){
        s1.insert(ary[i]);
        s2.insert(ary[i]);
    }

    set<int>::iterator it = s1.begin();
    cout<<" s1: ";
    while(it != s1.end())
       cout<<*it++<<" ";
    cout<<endl;

    it = s2.begin();
    cout<<"s2: ";
    while(it!= s2.end())
       cout<<*it++<<" ";
    cout<<endl;

    set<int> s3(ary,ary+3);
    it = s3.begin();
    cout<<" s3: ";
    while( it != s3.end())
         cout<<*it++<<" ";
    cout<<endl;

    set<int, less<int> > s4(s1);
    it = s4.begin();
    cout<<"s4: ";
    while( it != s4.end())
        cout<<*it++<<" ";
    cout<<endl;

    return 0;
}
