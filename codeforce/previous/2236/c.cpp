#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

#define endl '\n'

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

template <typename T>
void read(vector<T> &a)
{
    for (auto &x : a)
        cin >> x;
}
template <typename T>
void write(vector<T> &a)
{
    for (auto &x : a)
        cout << x << " ";
}

int32_t main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;

        vector<pair<ll, ll>> A, B;

        ll cur = a;
        ll cnt = 0;

        while (true)
        {
            A.pb({cur, cnt});

            if (cur == 0)
                break;

            cur /= x;
            cnt++;
        }

        cur = b;
        cnt = 0;

        while (true)
        {
            B.pb({cur, cnt});

            if (cur == 0)
                break;

            cur /= x;
            cnt++;
        }

        ll ans = 1e18;

        for (auto p1 : A)
        {
            ll u = p1.first;
            ll ca = p1.second;

            for (auto p2 : B)
            {
                ll v = p2.first;
                ll cb = p2.second;

                ll mx = max(u, v);

                ans = min(ans,
                          ca + cb +
                              (mx - u) +
                              (mx - v));
            }
        }

        cout << ans << endl;
    }
}