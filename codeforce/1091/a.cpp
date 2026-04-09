#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        for(int &x: v){
            cin>>x;
        }

        int sum = 0;
        for(int x: v){
            sum+=x;
        }
        if(sum%2!=0){
            cout<<"YES";
        }else if(k*n %2==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
}