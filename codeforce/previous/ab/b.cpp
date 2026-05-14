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

template <typename T>
void removeDuplicates(vector<T> &vec) {
    if (vec.empty()) return;
    std::sort(vec.begin(), vec.end());

    auto last = std::unique(vec.begin(), vec.end());

    vec.erase(last, vec.end());
}


int main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vi a(n);
        read(a);
        

        vi odd, even;
        for(int i = 0; i < n; i++){
            if((i+1) % 2 == 1) odd.push_back(a[i]);
            else even.push_back(a[i]);
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());
        
        int mo = 0, me = 0;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            if(x % 2 == 1) mo++;
            else me++;
        }

        mo = min(mo,(int)odd.size());
        me = min(me,(int)even.size());
        
        ll sum = 0;
        for(int x : a) sum += x;
        
        ll sub = 0;
        if(mo > 0 && !odd.empty()){
            int cap = min(mo, (int)odd.size());
            sub += odd[0];
            for(int i = 1; i < cap; i++){
                if(odd[i] > 0) sub += odd[i];
                else break;
            }
        }
        
        if(me > 0 && !even.empty()){
            int cap = min(me, (int)even.size());
            sub += even[0];
            for(int i = 1; i < cap; i++){
                if(even[i] > 0) sub += even[i];
                else break;
            }
        }

        
        cout<< sum -sub<<endl;
    }
}