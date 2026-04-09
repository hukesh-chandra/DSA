#include <bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin>>z;
    while(z--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int &x:v){
            cin>>x;
        }

        sort(v.begin(),v.end());

        int maxi =0;
        int cmax =1;
        int prev = v[0];
        for(int x: v){
            if(prev==x){
                maxi = max(maxi,cmax);
                continue;
            }else if(prev+1==x){
                cmax++;
                maxi = max(maxi,cmax);
            }else{
                maxi = max(maxi,cmax);
                cmax = 1;
            }
            prev =x;
        }
        

        cout<<maxi<<endl;
    }
    return 0;
}