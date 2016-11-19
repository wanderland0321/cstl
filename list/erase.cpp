#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

template<class T>
void print(list<T>& l){

     list<T>::iterator it = l.begin();

     while(it!=l.end()){
          cout<<*it++<<" ";
     }

     cout<<endl;
}
/*****************************************/
int main(){

    list<int> li(10);
    iota(li.begin(), li.end(), 1);

    print(li);

    list<int>::iterator it;
    it = find(li.begin(), li.end(), 6);

    li.erase(it);
    print(li);

    it = find(li.begin(), li.end(), 4);
    li.erase(li.begin(), it);
    print(li);

    return 0;

}

