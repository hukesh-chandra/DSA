#include <bits/stdc++.h>
using namespace std;

class A{
protected:
    int a;
public:
    void add(){
        cin>>a;
        cout<<a+1<<endl;
    }
};

class B{
public:
    int b;
    void add(){
        cin>>b;
        cout<<1+b<<endl;
    }
};

// class C:public B{
// public:
//     void show(){
//         cout<<"a = "<<a<<endl<<"b = "<<b;
//     }
// };

class D:public A,public B{
public:
    int d;
    void show(){
        cin>>d;
        cout<<A::a+b+d;
    }
};

int main(){
    // C ob;
    // ob.add();
    // ob.sum();
    // ob.show();
    D ob;
    ob.A::add();
    ob.B::add();
    ob.show();
    return 0;
}