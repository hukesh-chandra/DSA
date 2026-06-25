#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

using ll=long long;
using vi=vector<int>;
using vll=vector<long long>;

#define pb push_back
#define all(x)(x).begin(),(x).end()

template<typename T>
void read(vector<T>&a){
    for(auto &x:a)cin>>x;
}

template<typename T>
void write(vector<T>&a){
    for(auto &x:a)cout<<x<<" ";
}

ll countDigits(ll n){
    if(n==0)return 1;

    ll cnt=0;

    while(n){
        cnt++;
        n/=10;
    }

    return cnt;
}

ll closest(ll a,ll d1,ll d2,ll len){
    ll best=LLONG_MAX;

    for(ll mask=0;mask<(1LL<<len);mask++){
        ll num=0;

        for(ll i=0;i<len;i++){
            num=num*10+(((mask>>(len-1-i))&1)?d2:d1);
        }

        best=min(best,abs(a-num));
    }

    return best;
}

int32_t main(){
    fast_io;

    int t;
    cin>>t;

    while(t--){
        ll a,n;
        cin>>a>>n;

        ll d1,d2;
        cin>>d1>>d2;

        ll d=countDigits(a);

        ll ans=min(closest(a,d1,d2,d),closest(a,d1,d2,d+1));

        cout<<ans<<endl;
    }
}