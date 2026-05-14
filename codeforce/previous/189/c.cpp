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

int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        vector<int> dp(n+1,1e9);
        dp[0] = 0;

        for(int i=1;i<=n;i++) {
            dp[i] =dp[i-1];
            if(a[i-1] != b[i-1]) dp[i]++;

            if(i>=2) {
                int cost = 0;
                cost+=(a[i-1] !=a[i-2]);
                cost+=(b[i-1] != b[i-2]);
                dp[i]=min(dp[i], dp[i-2]+cost);
            }
        }

        cout<<dp[n]<<endl;
    }
}