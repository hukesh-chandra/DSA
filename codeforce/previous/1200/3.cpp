#include <bits/stdc++.h>
using namespace std;

bool findDublicate(vector<int> v){
    sort(v.begin(),v.end());
    int idx= 0;
    for(int &x: v){
        if(x==-1){
            idx++;
        }else{
            break;
        }
    }
    int prev = v[idx];
    for(int i = idx+1;i<v.size();i++){
        if(v[i]==prev){
            return false;
        }
        prev = v[i];
    }

    return true;
}

int main(){
    int z;
    cin>>z;
    while(z--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int &x:a){
            cin>>x;
        }
        for(int &x:b){
            cin>>x;
        }
        int flag = 1;

        bool t = findDublicate(b);

        if(!t){
            flag = 0;
        }

        for(int i = 0;i<n;i++){
            if(b[i] != -1){
                if(b[i]!=a[i]){
                    if(i<(n-k)){
                        flag=0;
                        break;
                    }
                }
            }
        }

        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}