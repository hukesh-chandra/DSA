#include <bits/stdc++.h>
using namespace std;

int main(){
    int val;
    cin>>val;
    for(int i=1;i<=val;i++){
        for(int j=1;j<=i;j++){
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}