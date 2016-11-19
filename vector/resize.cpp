#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    
    vector<int> v(5);
    for(int i=0; i<5; i++)
        v[i] = i*2;

    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
    cout<<endl;

}
