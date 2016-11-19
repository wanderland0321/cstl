#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> li(10);

    cout<<"size() of li = "
        <<li.size()<<endl;

    cout<<"max_size = "
        <<li.max_size()<<endl;

    return 0;
}
