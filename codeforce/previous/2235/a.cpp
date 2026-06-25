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
        int n,x,y,z;
        cin>>n>>x>>y>>z;

        int na = n/(y+x);
        if(n%(y+x) != 0) na++;
        int a = 0;
        int cnt = 0;
        while(a<n){
            cnt++;
            if(z>0){
                a+=x;
            }else{
                a = a+ x+ 10*y;
            }
            z--;
        }
        cout<<min(cnt,na);
        cout<<endl;
    }
}