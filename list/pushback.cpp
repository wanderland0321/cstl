#include <iostream>
#include <list>
#include <iomanip>
#include <string>
using namespace std;

template<class T>
class Name{
      private: 
          T first;
          T last;
      public:
          Name(T f, T l): first(f), last(l){ }
          void print();

};

template<class T>
void Name<T>::print(){
     cout.setf(ios::left);
     cout<<setw(15)<<first.c_str()<<last<<endl;
}

/////////////////////////////////
int main(){
    typedef Name<string> N;
    typedef list<N> L;
    L l;
    L::iterator it;

    N n1(string("Albert"), string("Johnson"));
    N n2("Lana", "Vinokur");

   l.push_back(n1);
   l.push_back(n2);

   l.push_back(N("Linda","Bain"));

   it = l.begin();
   while( it != l.end())
       (*it++).print();
   cout<<endl;

   return 0;

}
