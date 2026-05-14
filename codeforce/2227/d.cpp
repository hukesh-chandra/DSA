#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

using ll = long long;
using vi = vector<int>;

template<typename T>
void read(vector<T> &a){
    for(auto &x : a) cin >> x;
}

int32_t main(){
    fast_io;

    int t; 
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        vi v(n);
        read(v);

        vi smin(n, n + 1);
        for(int i = n - 2; i >= 0; i--){
            smin[i] = min(v[i + 1], smin[i + 1]);
        }

        ll total = 0, stat = 0;
        for(int i = 0; i < n; i++){
            total += v[i];
            stat += min(v[i], smin[i]);
        }

        ll base = total - stat;

        vector<int> val;
        vector<ll> cnt, pref;

        ll tot = 0, best = 0;

        for(int i = 0; i < n; i++){
            if(smin[i] >= v[i]){
                int id = lower_bound(val.begin(), val.end(), v[i]) - val.begin();
                ll c = tot - (id ? pref[id - 1] : 0);
                best = max(best, 1 + c);
            }

            ll cur = 1;
            while(!val.empty() && val.back() > v[i]){
                cur += cnt.back();
                tot -= cnt.back();
                val.pop_back();
                cnt.pop_back();
                pref.pop_back();
            }

            val.push_back(v[i]);
            cnt.push_back(cur);
            tot += cur;
            pref.push_back(tot);
        }

        cout << max(base, base - 1 + best) << endl;
    }

    return 0;
}