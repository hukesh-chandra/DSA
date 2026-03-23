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

        if(x.second.size()==1){
            res.push_back(1);
            continue;
        }

        bool flag =false;
        vector<int> temp = x.second;
        sort(temp.begin(),temp.end());

        for(int i = 0;i<temp.size();i++){
            if(temp[i] != x.second[i]){
                flag = true;
                break;
            }
        }
        if(flag){
            res.push_back(1);
        }else
        res.push_back(temp.size());
    }

    for(int x:res){
        cout<<x<<endl;
    }
    return 0;
}