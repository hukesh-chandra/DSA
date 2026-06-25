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

        vi ans;
        int is =0;
        vi d2;
        vi d3;
        vi dn;
        for(int x:v){
            if(x%6==0){
                ans.pb(x);
            }
            else if(x%3==0){
                d3.pb(x);
            }
            else if(x%2==0){
                d2.pb(x);
            }
            else{
                dn.pb(x);
            }
        }

        for(int x:d3){
            ans.pb(x);
        }
        for(int x:dn){
            ans.pb(x);
        }
         for(int x:d2){
            ans.pb(x);
        }
        write(ans);       
        cout<<endl;
    }
}