#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1; // keep searching left
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1; // keep searching right
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int totalOccurrence(int n, int target, vector<int>& arr) {
    int first = firstOccurrence(arr, n, target);
    if (first == -1) return 0; // not found
    int last = lastOccurrence(arr, n, target);
    return last - first + 1;
}

int searchRotated(vector<int> arr,int target){
    int idx=-1;
    int low=0;
    int high=arr.size();
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(target<=arr[arr.size()] && arr[mid]>target){
            low =mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return idx;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << searchRotated(arr, target);
    return 0;
}
