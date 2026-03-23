#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<pair<int,vector<int>>> c(num);
    for(auto &x:c){
        cin>>x.first;
        for(int i = 0;i<x.first;i++){
            int temp;
            cin>>temp;
            x.second.push_back(temp);
        }
    } 

    vector<int> res;

    for(auto x: c){
        int h = INT_MIN;
        for(int y: x.second){
            if(y>h){
                h = y;
            }
        }
        int cnt = 0;
        for(int y : x.second){
            if(y==h) cnt++;
        }
        res.push_back(cnt);
    }

    for(int x:res){
        cout<<x<<endl;
    }
    return 0;
}