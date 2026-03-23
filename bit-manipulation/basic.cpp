#include <bits/stdc++.h>
using namespace std;

bool bitSet(int n,int i){
    return (1<<i) & n;
}

bool checkOdd(int n){
    return bitSet(n,0);
}

int countSetBit(int n){
    int cnt = 0;
    while(n){
        n = (n & (n-1));
        cnt++;
    }
    return cnt;
}

int setRight(int n){
    return n | n+1;
}

int main(){
    int num;
    cin>>num;
    // int idx;
    // cin>>idx;
    cout<<countSetBit(num);
    return 0;
}