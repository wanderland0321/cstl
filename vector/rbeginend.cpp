#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

class ID{

     friend bool operator < (const ID &, const ID &);
  
     public:
       ID(string name, int score): name(name), score(score){ }
       void display(){
           cout.self(ios::left);
           cout<<setw(3)<<score<<name<<endl;
       }

     private:
       string name;
       int score;

};

bool operator < (const ID &a, const ID &b){
     return a.score<b.score;
}

typedef vector<ID> Vector;

/****************************/
int main(){

    Vector v;
    Vector::iterator iter;
 
    v.push_back(ID("Smith A", 96));
    v.push_back(ID("Amstrong B.", 91));
    v.push_back(ID("Watson D.", 82));

    for(iter = v.begin(); iter != v.end(); iter++)
        (*iter).display();
 
    sort(v.begin(), v.end());
    cout<<endl<<"Sorted by Score"<<endl;
    cout<<"==============="<<endl;

    for(iter=v.begin(); iter != v.end(); iter++)
        (*iter).display();

    cout<<endl<<"Reverse output"<<endl;
    cout<<"=============="<<endl;

    Vector::reverse_iterator r = v.rbegin();
    while(r != v.rend())
        cout<<(*r).display();
    cout<<endl;

    return 0;    

} 
