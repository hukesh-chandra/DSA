#include <iostream>
using namespace std;

void astericks1(int n){
        for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void astericks2(int n){
        for(int i = 0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void number1(int n){
        for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void number2(int n){
        for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void number3(int n){
        for(int i = 0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}

void number4(int n){
        for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            if((i-j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
}

void number5(int n){
    int num =1;
        for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void alphabet1(int n){
        for(int i = 1;i<=n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void alphabet2(int n){  
        for(int i = 0;i<n;i++){
        for(char j='A';j< 'A'+n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void alphabet3(int n){
        for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<char('A'+i)<<" ";
            
        }
        cout<<endl;
    }
}

void alphabet4(int n){
        for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<char('A'+n+j-i-1)<<" ";
            
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    alphabet4(n);
    return 0;
}