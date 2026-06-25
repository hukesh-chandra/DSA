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
        int mi = INT_MAX;
        int ma = INT_MIN;
        for(int x: v ){
            if(x<mi){
                mi = x;
            }
            if(x>ma){
                ma = x;
            }
        }

        cout<<ma-mi+1;
        cout<<endl;
    }
}