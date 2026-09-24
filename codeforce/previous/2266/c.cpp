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

        string s;
        cin >> s;

        int zcount = 0;

        for (char x : s) {
            if (x == '0') {
                zcount++;
            }
        }
        if (s[0]=='1') {
            cout << zcount << endl;
            continue;
        }

        int oc = 0;
        int zs = zcount;
        int ans = n;

        for (int i = 0; i < n; i++) {


            if (s[i] == '1') {
                oc++;
            } else {
                zs--;
            }

            ans = min(ans, oc + zs);
        }

        cout << ans << endl;
    }

    return 0;
}