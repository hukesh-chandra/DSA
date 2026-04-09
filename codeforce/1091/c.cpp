#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll help1(ll a,ll b){
    while(b){
        ll t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int main(){
    int t; 
    cin>>t;
    while(t--){

        ll n,m,a,b;
        cin>>n>>m>>a>>b;

        ll a2 = a % n;
        if(a2==0) a2=n;

        ll b2 = b % m;
        if(b2==0) b2=m;

        ll ga = help1(a2,n);
        ll gb = help1(b2,m);

        ll gnm = help1(n,m);

        if(ga==1 && gb==1 && gnm<=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}