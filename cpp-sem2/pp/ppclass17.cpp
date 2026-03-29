#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v= {1,2,3,4,5};
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    // v.clear();
    v.erase(v.begin()+1,v.begin()+4);
    v.push_back(23);
    v.pop_back();
    cout<<v[1]<<endl;

    cout<<v.empty()<<endl;

    cout<<v.size()<<endl<<v.capacity()<<endl;
    for(int x: v){
        cout<<x<<" ";
    }
}