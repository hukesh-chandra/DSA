#include <bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin>>z;
    while(z--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> v(n);
        for(int &x:v){
            cin>>x;
        }

        vector<pair<int,int>> p(m);
        for( pair<int,int> &x:p){
            cin>>x.first>>x.second;
        }

        for(int i =p.size()-1;i>=0;i--){
            v[p[i].first-1]+=p[i].second;
            if(v[p[i].first-1]>h){
                v[p[i].first-1]-=p[i].second;
                break;
            }
        }

        for(int x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}