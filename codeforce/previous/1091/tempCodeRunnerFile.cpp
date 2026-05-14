#include <bits/stdc++.h>
using namespace std;

void help(vector<int> &v,int s,int e){
    for(int i = s;i<=e;i++){
        v[i]= !v[i];
    }
}

int sume(vector<int> &v){
    int sum = 0;
    for(int x: v){
        sum+=x;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> v(n);
        for(int &x:v){
            cin>>x;
        }
        int idx;
        cin>>idx;
        int s =0;
        int l = n-1;
        
        int cnt = 0;

        if(v[idx-1]==0){
            while(sume(v)){
                while(s<idx-1 && v[s]==0) s++;
                while(l>idx-1 && v[l]==0) l--;
                if(s<idx-1 && l>idx-1){
                    help(v,s,l);
                    cnt++;
                }else if(s==idx-1){
                    help(v,idx-1,l);
                    cnt++;
                }else{
                    help(v,s,idx-1);
                    cnt++;
                }
            }
        }else{
            while(sume(v)!=n){
                while(s<idx-1 && v[s]==1) s++;
                while(l>idx-1 && v[l]==1) l--;
                if(s<idx-1 && l>idx-1){
                    help(v,s,l);
                    cnt++;
                }else if(s==idx-1){
                    help(v,idx-1,l);
                    cnt++;
                }else{
                    help(v,s,idx-1);
                    cnt++;
                }
            }
        }
        if(cnt%2!=0) cnt++;
        cout<<cnt;

        cout<<endl;
    }
}