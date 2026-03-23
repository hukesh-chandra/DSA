#include <bits/stdc++.h>
using namespace std;

string infixToPostfix(string s){
    stack<char> s;
    string res;
    for(char x:s){
        if(x>='A' && x<='Z'){
            res.push_back(x);
        }
        if(x=='('){
            s.push_back(x);
        }
    }
}

int main(){
    return 0;
}