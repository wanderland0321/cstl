#include <iostream>
#include <set>
using namespace std;

int main(){

    int ary[]={1, 2, 3, 2, 5, 4, 2, 1, 4, 5};
    
    multiset<int, less<int> > ms1;
    multiset<int, greater<int> > ms2(ary, ary+10);
    multiset<int>::iterator it;

    cout<<"ms2: ";
    for(it = ms2.begin(); it != ms2.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    multiset<int, greater<int> > ms3(ms2);

    cout<<"ms3: ";
    for(it = ms3.begin(); it != ms3.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    it = ms2.begin();

    while(it != ms2.end())
         ms1.insert(*it++);

    cout<<"ms1: ";
    for(it = ms1.begin(); it != ms1.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;

}
