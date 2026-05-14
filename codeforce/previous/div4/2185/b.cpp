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
        int maxi = -1;
        for(int x:v){
            maxi=max(maxi,x);
        }
        cout<<maxi*v.size();

        cout<<endl;
    }
    return 0;
}