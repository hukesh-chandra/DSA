#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int>(c));

    for(vector<int> &x: v){
        for(int &y: x){
            cin>>y;
        }
    }
    int cnt = 0;
    int flag = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(!flag && v[i][j]%2!=0){
                v[i][j]++;
                cnt++;
            }else if(flag && v[i][j]%2==0){
                v[i][j]++;
                cnt++;
            }

            flag = !flag;
    
        }
    }

    cout<<"Count: "<<cnt<<endl;
    for(vector<int> &x: v){
        for(int &y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}