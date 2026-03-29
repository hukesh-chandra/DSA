#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int &x:arr){
        cin>>x;
    }
    for(int  i =0;i<num/2;i++){
        swap(arr[i],arr[num-i-1]);
    }
    for(int x:arr){
        cout<<x<<" ";
    }


    return 0;
}