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
        string s;
        cin>>s;
        int ans;
        if(s.size()==1){
            ans = 1;
        }else{
        int  z = 0;
        int o = 0;

        for(char x: s){
            if(x==0)z++;
            if(x==1)o++;
        }

        if(o==z) ans = 0;
        else{
            int oo = o;
            int oz = z;
            for(int i = s.size()-1;i>=0;i++){
                if(s[i]) o--;
                else z--;

                if(o==z)
            }
        }

        
    }
        cout<<ans;
        cout<<endl;
    }
}