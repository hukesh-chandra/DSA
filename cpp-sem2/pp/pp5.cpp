#include <iostream>
using namespace std;

int& max(int &a, int &b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x = 10, y = 20;

    max(x, y) = -1; 

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
