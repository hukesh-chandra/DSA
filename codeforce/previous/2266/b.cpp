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

// GCD
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


// Extended GCD
// Returns g = gcd(a,b)
// Also finds x,y such that:
// a*x + b*y = g

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


// LCM
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}


// Modular Exponentiation
// Calculates (a^b) % mod in O(log b)

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

    ll t;
    cin >> t;

    while (t--) {

        int a,b,c;
        cin >> a>>b>>c;
        if(a>=b){
            cout<<a+c-b;
        }else{
            if((b-a)>(a+c-b)){
                cout<<b-a;
            }else{
                cout<<a+c-b;
            }
        }
        cout << endl;
    }
}