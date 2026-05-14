#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x;
        cin>>x;
        int c =x/9;
        if(x%9==0 && c%11!=10){
            cout<<10;
        }else{
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}