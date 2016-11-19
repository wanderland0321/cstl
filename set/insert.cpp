#include <iostream>
#include <set>
using namespace std;

void print(set<int, less<int> > & s){

     set<int, less<int> >::iterator it;

     for(it = s.begin(); it != s.end(); it++)
         cout<<*it<<" ";

     cout<<endl;

}
/////////////////////////////////////////////
int main(){

    int ary[]={1,2,3,2,3,4,8,2,5,6};
    set<int, less<int> > s;

    s.insert(10);
    print(s);

    s.insert(ary, ary+5);
    print(s);

    set<int, less<int> >::iterator it = s.begin();
    s.insert(it, 20);
    print(s);

    return 0;
}
