#include <bits/stdc++.h>
using namespace std;

class b{
private:
    int a =1;
protected:
    int b=2;
public:
    void get_data(){
        cout<<a<<" "<<b<<endl;
    }
};

class pu: public b{
    int i =5;
    int j =6;
public:
    void get_data(){
        cout<<i<<" "<<j<<endl;
    }
};

int main(){
    pu c;
    c.get_data();
    c.b::get_data();
    return 0;
}