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
void write(const vector<T> &a){
    for (auto &x : a) cout << x << " ";
}

int main(){
    fast_io;


        int n;
        cin >> n;

        vi v(n-1);
        read(v);

        vi a;

        int i = n - 2;

        while(i > 0){
            a.pb(i+2);
            i = v[i] - 2;
        }
        if(i==0) a.pb(2);
        a.pb(1);

        reverse(all(a));
        write(a);
        cout << '\n';
}