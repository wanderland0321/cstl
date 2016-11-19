#include <iostream>
#include <list>
using namespace std;


int main(){

    int ary[] = { 1,2,3,4,5 };
    list<int> li;

    for(int i=0; i<5; i++){
       li.push_front(ary[i]);
       cout<<"front() : "
           <<li.front()<<endl;
    }

    return 0;

}
