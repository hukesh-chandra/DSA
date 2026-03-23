#include <bits/stdc++.h>
using namespace std;

int bS(vector<int>& v, int t, int l, int h){
    if(l > h) return -1;

    int m = l + (h - l) / 2;

    if(t == v[m]){
        return m;
    }

    if(v[m] > t) 
        return bS(v, t, l, m - 1);
    else 
        return bS(v, t, m + 1, h);
}

void pI(vector<int> v,int t,int ){

}


int main(){


    return 0;
}