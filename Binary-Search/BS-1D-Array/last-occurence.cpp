#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int n,int target,vector<int> arr){
    int idx = -1;
    int low = 0;
    int high = n-1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            idx = mid; 
        }
        if (target >= arr[mid]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return idx;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<lastOccurence(n, target, arr);
    return 0;
}