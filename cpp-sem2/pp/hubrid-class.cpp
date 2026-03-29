#include <bits/stdc++.h>
using namespace std;

class A{
public:
    int a;
    void get(){
        cin>>a;
    }
};

class B:virtual public A{
public:
    void show(){
        cout<<a+1<<endl;
    }
};

class C:virtual public A{
public:
    int d;
    void put(){
        cin>>d;
        a=d;
        cout<<a<<endl;
    }
};

class D:public B,public C{
public:
    int c;
    void add(){
        cin>>c;
        cout<<a+c<<endl;
    }
};

int main(){
    D ob2;
    ob2.get();
    ob2.put();
    ob2.add();


    return 0;
}