#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int ary[] = {1,2,3,4,5};
    vector<int> v;

    v.assign(ary, ary+5);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

    v.assign(3,100);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
    cout<<endl;
   
    return 0;

}
