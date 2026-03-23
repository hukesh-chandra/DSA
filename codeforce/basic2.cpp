#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<pair<int,string>> c(num);
    for(auto &x:c){
        cin>>x.first;
        cin>>x.second;
    } 

    vector<int> res;

    for(auto x: c){
        if(x.first==1){
            res.push_back(0);
            continue;
        }

        stack<char> s;

        for(char y:x.second){
            if(s.empty()){
                s.push(y);
                continue;
            }else{
                if(s.top()==y){
                    s.pop();
                }else{
                    s.push(y);
                }
            }
        }

        if(s.empty()){
            res.push_back(1);
        }else{
            res.push_back(0);
        }
    }

    for(int x:res){
        if(x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}