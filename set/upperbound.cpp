#include <iostream>
#include <set>
#include <iomanip>
#include <string>
using namespace std;

template<class T>
class Member{
   
      private:
          T first, last;
      public:
          Member(T l): last(l), first(" "){ }
          Member(T l, T f): last(l), first(f){}
          void print() const{
               cout.setf(ios::left);
               cout<<setw(15)<<first.c_str()<<last<<endl;
          }

      friend bool operator < (const Member & m1, const Member & m2){
          return (m1.last < m2.last) ? true : false;
      }
      friend bool operator == (const Member & m1, const Member & m2){
          return (m1.last == m2.last) ? true : false;
      }
};

////////////////////////////
int main(){

    typedef Member<string> M;
    typedef set<M, less<M> > S;
    S s;

    s.insert(M("Smith", "John"));
    s.insert(M("Shevchenko", "Taras"));
    s.insert(M("Amstrong", "Bill"));
    s.insert(M("Bain","Linda"));
    s.insert(M("Pushkin", "Alexander"));
    s.insert(M("Pasternak", "Boris"));

    S::iterator it = s.begin();
    while( it != s.end())
         (*it++).print();
    cout<<endl;

    M m1("P");
    M m2("Pzz");

    S::iterator low = s.lower_bound(m1);
    S::iterator upp = s.upper_bound(m2);

    it = low;
 
    while(it!=upp)
        (*it++).print();

    return 0;

}
