#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int ary[] = {1,2,3,2,4,5,7,2,6,8};
    multiset<int> s(ary, ary+10);
    copy(s.begin(), s.end(), ostream_iterator<int>(cout, " " ));

    return 0;

}
