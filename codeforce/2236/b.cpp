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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        bool flag = 1;

        for(int r = 0;r<k;r++){
            int cnt = 0;
            for(int i =r;i<n;i+=k)
                cnt+=(s[i]=='1');
            
                if(cnt & 1){
                    flag = 0;
                    break;
                }
            
        }



        if(flag) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}