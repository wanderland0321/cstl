#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

int main(){

    vector<int> v(5);
    iota(v.begin(), v.end(), 1); 

    vector<int>::iterator it = v.begin();

    while(it != v.end())
        cout<<*it++<<" ";
    cout<<endl;

    it = v.end() - 1;
    cout<<*it<<endl;

    return 0;

}
