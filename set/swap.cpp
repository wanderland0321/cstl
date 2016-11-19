#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void print( set<int, less<int> > & s ){
     copy(s.begin(), s.end(), ostream_iterator<int>(cout, " " ));
     cout<<endl;
}
///////////////////////////////////////
int main(){

    int ary1[] = {1, 2, 3, 2, 3, 4, 8, 2, 5, 6};
    int ary2[] = { 5, 0, 9, 2, 3, 4, 8, 2, 5, 6};
    set<int, less<int> > s1, s2;

    s1.insert(ary1, ary1+10);
    cout<<"s1: ";
    print(s1);

    cout<<"s2: ";
    s2.insert(ary2, ary2+10);
    print(s2);
 
    if(s1 != s2)
       s1.swap(s2);

    cout<<"s1: ";
    print(s1);

    cout<<"s2: ";
    print(s2);

    return 0;
   
}
