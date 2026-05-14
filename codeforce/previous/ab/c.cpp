#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

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

int main(){
    fast_io;

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n); read(a);

        vi b = a;
        sort(all(b));
        int M = b[n/2];

        vi pre(n+1, 0);
        for(int i = 0; i < n; i++){
            int val = (a[i] > M) ? 1 : (a[i] < M ? -1 : 0);
            pre[i+1] = pre[i] + val;
        }

        int ans = 0, last = 0;

        while(last < n){
            bool ok = false;
            for(int r = last + 1; r <= n; r++){
                if(pre[r] == pre[last] && (r % 2 != last % 2)){
                    ans++;
                    last = r;
                    ok = true;
                    break;
                }
            }
            if(!ok) break;
        }

        cout << ans << '\n';
    }
}