#include <bits/stdc++.h>
using namespace std;

int mod = 676767677;

long long int help(int s){
    long long int cnt = 0;
    for(long long i = 1;i*i<=s;i++){
        if(s%i==0){
            cnt++;
            if(i != s/i) cnt++;
        }
    }

    return cnt%mod;
}
int main(){
    int z;
    cin>>z;
    while(z--){
        int x,y;
        cin>>x>>y;
        int s = abs(x-y);
        long long ans = (s==0) ? 1: help(s);

        cout<<ans<<endl;
        while(x--){
            cout<<1<<" ";
        }
        while(y--){
            cout<<-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}