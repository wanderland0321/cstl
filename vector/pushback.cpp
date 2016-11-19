#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

template <class T>
class Name{

    private:
      T name;

    public:
      Name(T t): name(t){ }
      void print(){
           cout<<name<<" ";
      }

}
/****************************/
int main(){

    typedef Name<string> N;
    typedef vector<N> V;
    V v;
    N n1("Robert");
    N n2("Alex");

    v.push_back(n1);
    v.push_back(n2);

    v.push_back(N("Linda"));
    V::iterator it = v.begin();
    while(it != v.end())
        (*it).print();
    cout<<endl;

    return 0;
 
}
