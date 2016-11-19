#include <iostream>
#include <set>
using namespace std;

void print(multiset<int, less<int> > & s){
     multiset<int, less<int> > ::iterator it;
     for(it = s.begin(); it != s.end(); it++)
         cout<<*it<<" ";
     cout<<endl;
}
//////////////////////////////////////////////
int main(){

    int ary[] = { 1, 2, 3, 2, 3, 4, 8, 2, 5, 6};
    multiset<int, less<int> > s;

    s.insert(ary, ary+10);
    print(s);

    cout<<"count of '2' is ";
    int n = s.count(2);
    cout<<n<<endl;

    return 0;

}
