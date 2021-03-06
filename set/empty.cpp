#include <iostream>
#include <set>
using namespace std;

void print(set<int, less<int> > & s){
     set<int, less<int> >::iterator it;
     for(it = s.begin(); it != s.end(); it++)
            cout<<*it<<" ";
     cout<<endl;
}
/////////////////////
int main(){
    int ary[] = {1,2,3,2,3,4,8,2,5,6};
    set<int, less<int> > s;

    s.insert(ary, ary+10);
    print(s);

    cout<<"set is "<<((s.empty())?" ":"not ")<<"empty"<<endl;

    s.clear();

    cout<<"set is "<<((s.empty())?" ":"not ")<<"empty"<<endl;

    return 0;
}
