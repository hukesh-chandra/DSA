#include <bits/stdc++.h>
using namespace std;

int insertPosition(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; 
        }
        if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target; 
    cout << insertPosition(arr, target);
    return 0;
}