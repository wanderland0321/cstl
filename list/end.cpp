#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main(){

    list<int> li(10);
    iota(li.begin(), li.end(), 1);

    list<int>::iterator it = li.begin();
    while(it != li.end())
        cout<<*it++<<" ";
    cout<<endl;

    return 0;

}
