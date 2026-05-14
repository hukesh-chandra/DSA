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
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        
        int cnt = 0;
        char prev = n[0];
        for(int i = 1;i<n.size();i++){
            if(prev=='a' && n[i]=='b'){
                prev = 'b';
                continue;
            }
            if(prev=='b' && n[i]=='a'){
                prev = 'a';
                continue;
            }
                cnt++;
            
        }

        if(cnt>2){
            cout<<"NO";
        }else{
            cout<<"YES";
        }

        cout<<endl;
    }
}