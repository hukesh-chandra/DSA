#include <iostream>
using namespace std;

void square1(int n){
    for (int i = 0; i < n; i++) {       
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void square2(int n){
    for (int i = 0; i < n; i++) {       
        for (int j = 0; j < n; j++) {
            if(i==n-1 || i==0 || j==0 || j==n-1){
                cout << "* ";
            }else {
                cout << "  ";
            }
            
        }
        cout << endl;
    }
}

void square3(int n){
    for (int i = 0; i < 2*n-1; i++) {       
        for (int j = 0; j < 2*n-1; j++) {
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;

             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;
    square3(n);
    return 0;
}
