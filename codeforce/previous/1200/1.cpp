#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int &x:v){
            cin>>x;
        }
        vector<int> a;
        for(int x:v){
            if(v.size()<3){
                a.push_back(v.size());
            }
            else{
                a.push_back(2);
            }
        }

        for(int x: a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}