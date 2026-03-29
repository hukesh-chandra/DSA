#include <bits/stdc++.h>
using namespace std;

class A{
public:
    int a;
    void get(){
        cin>>a;
    }
};

class B:public A{
public:
    void show(){
        cout<<a+1<<endl;
    }
};

class C:public A{
public:
    int d;
    void put(){
        cin>>d;
        a=d;
        cout<<a<<endl;
    }
};

class D:public A{
public:
    int c;
    void add(){
        cin>>c;
        cout<<a+c<<endl;
    }
};

int main(){
    B ob;
    ob.get();
    ob.show();
    C ob1;
    ob1.get();
    ob1.put();
    D ob2;
    ob2.get();
    ob2.add();


    return 0;
}