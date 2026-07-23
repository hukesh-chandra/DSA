#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'

using ll = long long;
using vi = vector<int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T>
void read(vector<T> &a){
    for(auto &x : a) cin >> x;
}

int n;
vi bit;

void update(int idx,int val){
    for(;idx<=n;idx+=idx&-idx){
        bit[idx]+=val;
    }
}

int query(int idx){
    int sum = 0;

    for(;idx>0;idx-=idx&-idx){
        sum += bit[idx];
    }

    return sum;
}

int rangeQuery(int l,int r){
    if(l>=r) return 0;
    return query(r) - query(l);
}

int32_t main(){
    fast_io;

    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> n >> k;

        vi a(n);
        read(a);

        vi cnt(n+1,0);

        for(int x : a){
            cnt[x]++;
        }

        bit.assign(n+1,0);

        bool ans = false;

        for(int val=n;val>=1;val--){

            int r = min(n,val+k);

            bool hasWinning = rangeQuery(val,r) > 0;

            bool losing = (cnt[val]&1) && !hasWinning;

            if(cnt[val] && !losing){
                ans = true;
            }

            if(losing){
                update(val,1);
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
}