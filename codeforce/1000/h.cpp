#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = (a+b)/3;
        bool flag = 1;
        if(((a+b)%3!=0) || ((2*a-b)%3!=0) || ((a-2*b)%3!=0)){
            flag =0;
        }

        if(b>c || b<-1*c || a>4*c || a<2*c){
            flag=0;
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}