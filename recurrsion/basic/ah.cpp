#include <bits/stdc++.h>
using namespace std;

double myPow(double x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n==-1) return 1/x;

    if(n<0){
        return myPow(x,n+1)*1/x*x;
    }

    return myPow(x,n-1)*x;
}

int main(){

    cout<<myPow(4.0,-3);
    return 0;
}