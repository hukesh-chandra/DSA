#include <bits/stdc++.h>
using namespace std;

class Sum{
public:
    Sum(int a,int b){
        cout<<a+b;
    }

    Sum(int a,int b,int c){
        cout<<a+b+c;
    }
};

int main(){
    Sum s1(2,3);
    Sum s2(3,4,5);
    return 0;
}