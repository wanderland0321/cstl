#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <exception>
using namespace std;

int main(){
    vector<int> v(5);
    fill(v.begin(), v.end(), 1);

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " " ));
    cout<<endl;

    try{
       for(int i = 0; i<10; i++)
          cout<<v.at(i)<<" ";
       cout<<endl;

    } catch(exception & e){
       cout<<endl<<"Exception: "
           <<e.what()<<endl;
    }
    cout<<"End of program"<<endl;

    return 0;
}
