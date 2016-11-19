#include <iostream>
#include <deque>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

int main(){
    deque<int> d(5);
    iota(d.begin(), d.end(), 1);

    vector<int> v(5);
    iota(v.begin(), v.end(), 1);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout<<endl<<endl;

    deque<int>::iterator it = d.begin();
    while(it!=d.end())
        cout<<*it++<<" ";
    cout<<endl;

    it = d.begin() + 2;
    cout<<*it<<endl;

    return 0;
}
