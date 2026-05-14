#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);;
        for(int &x:v){
            cin>>x;
        }
        sort(v.begin(),v.end(), greater<>());

        int prev = -1;
        int flag = 0;
        for(int x:v){
            if(x==prev){
                flag = 1;
                break;
            }
            prev = x;
        }
        if(flag) cout<<-1;
        else{
        for(int x:v){
            cout<<x<<" ";
        }
        }
        cout<<endl;
    }
}