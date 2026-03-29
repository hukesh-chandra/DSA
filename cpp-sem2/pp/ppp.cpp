#include <bits/stdc++.h>
using namespace std;

template<typename... Args>
auto sum(Args... args) {
    return (args + ...);
}

int main() {
    cout << sum(1, 2, 3);          
    cout << sum(1.5, 2.5, 3.0);    
}
