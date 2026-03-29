#include <bits/stdc++.h>
using namespace std;

void triangle(int s){
    int flag = 1;
    for(int i = 0;i<s;i++){
        for(int j = i;j>=0;j--){
            cout<<flag;
            flag=!flag;
        }
        cout<<endl;
    }
}

void rhombus(int s){
    for(int i = 1;i<=s;i++){
        for(int j = i;j<s;j++){
            
                cout<<" ";
            
        }

        for(int j = 1;j<=s;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pallindrome(int s){
    for(int i = 1;i<=s;i++){
        for(int j = i;j<s;j++){
            
                cout<<" ";
            
        }

        for(int j = i;j>=1;j--){
            cout<<j;
        }

        for(int j = 2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    // triangle(num);
    // rhombus(num);
    pallindrome(num);
    return 0;

}