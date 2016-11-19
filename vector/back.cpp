#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

template<class T, class D>
class Member
{
    public:
        Member(T t, D d) : name(t), sal(d) {}
        void print();
    private:
        T name;
        D sal;
};

template<class T, class D>
void Member<T, D>::print()
{
    cout << name << "  " << sal << endl;
}
//======================================
int main ()
{
    typedef Member<string,double> M;
    vector<M> v;

    v.push_back(M("Robert",60000));
    v.push_back(M("Linda",75000));

    vector<M>::iterator It = v.begin();
    cout << "Entire vector:" << endl;

    while ( It != v.end() )
        (It++)->print();
    cout << endl;

    cout << "Return from back()" << endl;
    v.back().print();
    return 0;
}
