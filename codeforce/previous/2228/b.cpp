#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);


#define endl '\n'

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

int32_t main(){
    fast_io;

    int t;
    cin>>t;
    while(t--){
        int n,x1,x2,k;
        cin>>n>>x1>>x2>>k;
        if(n<=3) k = 0;
        int s1 = abs(x1-x2);
        int s2 = n-max(x2,x1)+min(x1,x2);

        cout<<min(s1,s2)+k;

        cout<<endl;
    }
}