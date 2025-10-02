#include <bits/stdc++.h>
using namespace std;

int minRotated(vector<int> arr,int n){
    int low = 0, high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid+1] &&  arr[mid] < arr[mid-1]) return arr[mid];

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low]<arr[high]) {
                return arr[low];
            } else {
                low = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (arr[mid] < arr [mid-1]) {
                return arr[mid];
            } else {
                high = mid - 1;
            }
        }
    }
    
    return arr[low];
}

int noOfRotation(vector<int> arr,int n){
    int count = 0;
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<minRotated(arr,n);
    return 0;
}