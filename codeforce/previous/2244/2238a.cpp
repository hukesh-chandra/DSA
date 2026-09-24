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
        int n,c;
        cin>>n>>c;
        vi v1(n);
        vi v2(n);
        read(v1);
        read(v2);

        int a1 = 0;
        for(int i = 0;i<n;i++){
            if(v2[i]>v1[i]){
                a1 = -1;
                break;
            }

            a1+=v1[i]-v2[i];
        }

        sort(all(v1));
        sort(all(v2));

        int a2 = 0;

        for(int i = 0;i<n;i++){
            if(v2[i]>v1[i]){
                a2 = -1;
                break;
            }

            a2+=v1[i]-v2[i];
        }

        if(a1==-1 && a2==-1){
            cout<<-1;
        }else if(a1 != -1){
            cout<<min(a1,a2+c);
        }else{
            cout<<a2+c;
        }

        cout<<endl;
    }
}