#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d(10);
    cout<<"Size of d = "
        <<d.size()<<endl;
    cout<<"Max_size of d = "
        <<d.max_size()<<endl;
    return 0;
}
