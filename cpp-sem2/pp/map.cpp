#include <bits/stdc++.h>
using namespace std;


int main(){
    map<string, int> mp;


    mp["sohan"] = 12;
    mp["mohan"] = 14;
    // cout<<mp["Sohan"];
    
    if(mp.find("sohan") != mp.end()){
        cout<<"Found"<<endl;
    }
    for(pair<string,int> x: mp){
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
    return 0;
}