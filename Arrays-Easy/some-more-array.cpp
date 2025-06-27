#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void MoveZeroToEnd(vector<int> &arr,int n){
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]==0){
    //         int temp =i;
    //         while(temp<n-1){
    //             swap(arr[temp],arr[temp+1]);
    //             ++temp;
    //         }
    //     }
    // }
    int j =0;

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            ++j;
        }
    }

    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    return 0;
} 