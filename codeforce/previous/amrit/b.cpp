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
        int n;
        cin>>n;
        vi v(n);
        read(v);

        for(int i = 1;i<=n;i++){
            vector<int> v1 = {};
            
            int acnt = 0;
            for(auto x:v){
                if(find(v1.begin(),v1.end(),x) != v1.end()){
                    acnt++;
                    v1.push_back(x);
                }else{
                    v1.push_back(x);
                    acnt+=2;
                }
                if(v1.size()>i){
                    v1.erase(v1.begin());
                }
            }
            cout<<acnt<<" ";
        }
        cout<<endl;
    }
}