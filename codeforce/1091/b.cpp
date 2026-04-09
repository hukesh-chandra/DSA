#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        int sum = 0;
        for(int &x:v){
            cin>>x;
            sum+=x;
        }
        vector<int> idxes(k);
        for(int &x: idxes){
            cin>>x;
        }
        int mini = INT_MAX;
        for(int idx: idxes){
        int lcnt = 0;
        int scnt = 0;
        int q = v[idx-1];
        for(int i = 0;i<idx-1;i++){
            if(v[i]!=q){
                scnt++;
                q= !q;
            }
        }
        q = v[idx-1];
        for(int i = n-1;i>idx-1;i--){
            if(v[i]!=q){
                lcnt++;
                q = !q;
            }
        }
        int cnt = max(scnt,lcnt);
        if(cnt%2!=0) cnt++;
        mini = min(mini,cnt);

    }
        cout<<mini;

        cout<<endl;
    }
}