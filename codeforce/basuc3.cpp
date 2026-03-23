#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<pair<pair<int,pair<int,int>>,vector<int>>> c(num);
    for(auto &x:c){
        cin>>x.first.first;
        cin>>x.first.second.first;
        cin>>x.first.second.second;
        for(int i = 0;i<x.first.first;i++){
            int temp;
            cin>>temp;
            x.second.push_back(temp);
        }
    } 

    vector<int> res;

    for(auto x: c){
        int fp = x.first.second.first;
        int sp = x.first.second.second;
        vector<int> arr = x.second;
        int srlp = INT_MAX;
        int sbp = INT_MAX;
        int slrp = INT_MAX;
        for(int i = 0;i<arr.size();i++){
            if(i>=fp && arr[i]<slrp){
                slrp = arr[i];
            }
            if(i<=fp && i>sp && arr[i]<sbp){
                sbp = arr[i];
            }
            if(i<=sp && arr[i]<srlp){
                srlp = arr[i];
            }
        }

        if(slrp<)
    }

    for(int x:res){
        cout<<x<<endl;
    }
    return 0;
}