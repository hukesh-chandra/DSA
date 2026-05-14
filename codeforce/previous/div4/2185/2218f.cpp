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
        int x,y;
        cin>>x>>y;

        if((x+y)%2==0){
            if(x==0 || x>y){
                cout<<"NO"<<endl;
                continue;
            }
        }else{
            if(x>=y){
                cout<<"NO"<<endl;
                continue;
            }
        }

        cout<<"YES"<<endl;

        if((x+y)==1) continue;
        
        if(x==0){
            int i = 2;
            while(y--){
                cout<<1<<" "<<i++<<endl;
            }
        }
        
        int i = 2;
        while(x!=0 && y!=0){
            if(x==0){
                while(y--){
                cout<<1<<" "<<i++<<endl;
            }
            break;
            }
            cout<<--i<<" "<<i++<<endl;
            x--;
            y--;

        }

        cout<<endl;
    }
}