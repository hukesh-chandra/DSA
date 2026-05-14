#include <bits/stdc++.h>
using namespace std;

extern int i;
int main(){
    int i = 30;
    {
        i = 20;
        cout<<i;
    }
    cout<<i;
    return 0;
}