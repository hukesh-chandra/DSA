#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> s(int n){
    vector<int> p;
    vector<int> v(n+1,1);
    v[0]=v[1]=0;
    for(int i=2;i*i<=n;i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(v[i]) p.push_back(i);
    }
    return p;
}

int main(){

    vector<int> p = s(200000);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<1LL*p[i]*p[i+1]<<" ";
        }
        cout<<endl;
    }
}