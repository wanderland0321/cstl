#include <iostream>
#include <deque>
#include <iterator>
#include <numeric>
using namespace std;

int main(){
   deque<int> d(5);
   iota(d.begin(), d.end(), 1);
   deque<int>::iterator it = d.begin();
   while(it!= d.end())
       cout<<*it++<<" ";
   cout<<endl;

   it = d.end() - 1;
   cout<<*it<<endl;

   return 0;
}
