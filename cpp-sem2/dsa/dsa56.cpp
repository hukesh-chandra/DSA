#include <bits/stdc++.h>
using namespace std;

int eval(string a){
    stack<char> s;
    for(char x: a){
        if(x>='0'&& x<='9'){
            s.push(x-'0');
        }else{
            if(x=='+'){
                int t = s.top();
                s.pop();
                int t1 = s.top();
                s.pop();
                s.push(t1+t);
            }else if(x=='-'){
                int t = s.top();
                s.pop();
                int t1 = s.top();
                s.pop();
                s.push(t1-t);
            }else if(x=='*'){
                int t = s.top();
                s.pop();
                int t1 = s.top();
                s.pop();
                s.push(t1*t);
            }else if(x=='/'){
                int t = s.top();
                s.pop();
                int t1 = s.top();
                s.pop();
                s.push(t1/t);
            }else if(x=='^'){
                int t = s.top();
                s.pop();
                int t1 = s.top();
                s.pop();
                s.push(pow(t1,t));
            }
        }
    }

    return s.top();
}

int main(){
    string s;
    cin>>s;
    cout<<eval(s);
    return 0;
}