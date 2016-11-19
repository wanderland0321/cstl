#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
using namespace std;

int main(){
    int N, M;
    int i, j;
    int temp;
    vector<int> s1, s2;
    set<int> result;

    cout<<"Please enter the number of elements for s1: "<<endl;
    cin>>N;
    for(i = 0; i<N; i++){
       cin>>temp;
       s1.insert(0,temp);
    }

    cout<<"Please enter the number of elements for s2: "<<endl;
    cin>>M;
    for(j=0; j<M; j++){
       cin>>temp;
       s2.insert(0,temp);
    }

    cout<<"Output s1 & s2: "<<endl;
    copy(s1.begin(), s1.end(),ostream_iterator<int>(cout, " "));
    cout<<endl;
    copy(s2.begin(), s2.end(),ostream_iterator<int>(cout, " "));
    cout<<endl;

    

}
