#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()


// ---------- Input / Output ----------

template<typename T>
void read(vector<T> &a) {
    for (auto &x : a) cin >> x;
}

template<typename T>
void write(vector<T> &a) {
    for (auto &x : a) cout << x << " ";
}


// ---------- Number Theory ----------

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll extended_gcd(ll a, ll b, ll &x, ll &y) {

    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;

    ll g = extended_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll modpow(ll a, ll b, ll mod) {
    ll ans = 1;
    a %= mod;

    while (b > 0) {
        if (b & 1) {
            ans = ans * a % mod;
        }

        a = a * a % mod;
        b >>= 1;
    }

    return ans;
}


int32_t main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        set<int> avail, chosen;

        for (int i = 0; i < n; i++) {
            avail.insert(i);
        }

        for (int x = 1; x <= n; x++) {

            int A = a[x];

            for (int i = 0; i < A; i++) {

                ll l = 1LL * i * x;
                ll r = min(1LL * n - 1, l + x - 1);

                if (l > n - 1) {
                    break;
                }

                auto it = chosen.lower_bound(l);

                if (it != chosen.end() && *it <= r) {
                    continue;
                }

                auto jt = avail.lower_bound(l);

                chosen.insert(*jt);
                avail.erase(jt);
            }

            ll l = 1LL * A * x;

            if (l <= n - 1) {

                ll r = min(1LL * n - 1, l + x - 1);

                avail.erase(
                    avail.lower_bound(l),
                    avail.upper_bound(r)
                );
            }
        }
    }
}