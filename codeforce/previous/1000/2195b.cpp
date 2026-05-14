#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x:a){
            cin>>x;
        }

        for(int i = 0;i<n/2;i++){
            if(a[i]>a[2*i]){
                swap(a[i],a[2*i]);
            }
        }
        int prev = a[0];
        int flag =1;
        for(int x:a){
            if(x<prev){
                flag = 0;
                break;
            }
            prev =x;
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