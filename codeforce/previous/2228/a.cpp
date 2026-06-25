#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);


#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T>
void read(vector<T> &a) {
    for (auto &x : a) cin >> x;
}
template<typename T>
void write(vector<T> &a){
    for(auto &x: a) cout<<x<<" ";
}

int32_t main(){
    fast_io;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);

        read(v);

        int z = 0, o = 0, tw = 0;

        for(int x: v){
            if(x==0){
                z++;
            }
            if(x==1){
                o++;
            }
            if(x==2){
                tw++;
            }
        }
        int ans = min(tw,o);
        o-=ans;
        tw-=ans;
        ans+=z;
        if(o>=3) ans+=(o/3);
        if(tw>=3) ans+=(tw/3);

        
        cout<<ans;

        cout<<endl;
    }
}