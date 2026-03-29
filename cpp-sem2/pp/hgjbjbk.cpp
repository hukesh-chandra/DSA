#include <bits/stdc++.h>
using namespace std;


int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int main(){
    int a=5;
    int b=6;
    cout<<sum(a,b)<<endl;;

    int *ptr = new int;
    *ptr  = 8;
    cout<<*ptr<<endl<<ptr<<endl;
    return 0;
}