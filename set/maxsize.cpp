#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void print( set<int, less<int> > & s){
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
}
//////////////////////////////////////
int main(){

    int ary[]={1,2,3,2,3,4,8,2,5,6};
    set<int, less<int> > s;
  
    s.insert(ary, ary+10);
    print(s);

    cout<<"size of set 's' = "
        <<s.size()<<endl;
    cout<<"max_size of 's' = "
        <<s.max_size()<<endl;

    return 0;

}
