#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10);
    cout<<"Size of v = "
        <<v.size()<<endl;
    cout<<"Max_size of v = "
        <<v.max_size()<<endl;

    return 0;
}
