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




void sieve(vi &spf, int n) {

    for (int i = 2; i <= n; i++) {

        if (spf[i] != 0) {
            continue;
        }

        for (int j = i; j <= n; j += i) {

            if (spf[j] == 0) {
                spf[j] = i;
            }
        }
    }
}


int32_t main() {
    fast_io;

    const int MAXN = 200000;

    vi spf(MAXN + 1);
    sieve(spf, MAXN);

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vi a(n);
        read(a);

        vll dp(n + 1, 0);

        for (int x = k + 1; x <= n; x++) {

            ll best = LLONG_MAX;
            int y = x;

            while (y > 1) {

                int p = spf[y];

                best = min(best, 1LL + p * dp[x / p]);

                while (y % p == 0) {
                    y /= p;
                }
            }

            dp[x] = best;
        }

        ll ans = 0;

        for (int x : a) {
            ans += dp[x];
        }

        cout << ans << endl;
    }

    return 0;
}