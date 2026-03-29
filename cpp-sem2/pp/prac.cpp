#include <bits/stdc++.h>
using namespace std;

int findSingle(vector<int> arr){
    int low =0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if((mid == 0 && arr[mid] != arr[mid+1])||( mid == arr.size()-1 && arr[mid] != arr[mid-1])){
            return arr[mid];
        }
        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
            return arr[mid];
        }
        if(mid%2==0){
            
        }
    }
    return;
}

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int &x:arr){
        cin>>x;
    }
    cout<<findSingle(arr);
    return 0;
}