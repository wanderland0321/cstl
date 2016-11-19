#include <iostream>
#include <set>
#include <iomanip>
#include <string>
using namespace std;
     
template<class T>
class Member{
     
   public:
      Member(T l, T f): last(l), first(f){ }
      void print() const{
           cout.setf(ios::left);
           cout<<setw(15)<<first.c_str()<<last<<endl;
      }
     
   private:
      T first, last;
     
   friend bool operator < (const Member& m1, const Member& m2){
      return (m1.last< m2.last) ? true : false;
    }
    
   friend bool operator == (const Member& m1, const Member& m2){
      return (m1.last == m2.last) ? true:false;
    }
    
};  
////////////////////
int main(){

    typedef Member<string> M;
    typedef set<M, less<M> > S;
    M m("Frost", "Robert" );
    S s;

    s.insert(m);
    s.insert(M("Smith", "John"));
    s.insert(M("Amstrong", "Bill"));
    s.insert(M("Bain","Linda"));

    S::iterator it = s.begin();
    while(it != s.end())
        (*it++).print();
   
    it = s.find(m);
    if(it == s.end())
      cout<<"element not found"<<endl;
    else{
      cout<<"element is found: ";
      (*it).print();
    }

    return 0;

}
