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

        vector<int> v;

        vector<int> t1;
        vector<int> t2;
        vector<int> t3;
        vector<int> t4;


        for(int i = 1;i<=n;i++){
            t1.push_back(i);
            t2.push_back(i);

        }
        reverse(t2.begin(), t2.end());

        t3 = t1;
        t4 = t1;

        if (n % 2 == 0) {
            rotate(t3.begin(), t3.end() - 2, t3.end());

            vector<int> ans;

            ans.insert(ans.end(), t1.begin(), t1.end());
            ans.insert(ans.end(), t2.begin(), t2.end());
            ans.insert(ans.end(), t1.begin(), t1.end());
            ans.insert(ans.end(), t3.begin(), t3.end());

            for (int x : ans) cout << x << " ";
        }
        else {
            rotate(t3.begin(), t3.end() - 2, t3.end());
            rotate(t4.begin(), t4.end() - 1, t4.end());

            vector<int> ans;

            ans.insert(ans.end(), t1.begin(), t1.end());
            ans.insert(ans.end(), t2.begin(), t2.end());
            ans.insert(ans.end(), t3.begin(), t3.end());
            ans.insert(ans.end(), t4.begin(), t4.end());

            for (int x : ans) cout << x << " ";
        }

        cout<<endl;
    }
}