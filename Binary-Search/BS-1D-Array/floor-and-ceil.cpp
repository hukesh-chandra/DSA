#include <bits/stdc++.h>
using namespace std;

pair<int,int> floorAndCeil(vector<int> &arr,int target){
    int low = 0;
    int high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return {arr[mid],arr[mid]}; 
        }
        if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return {arr[low-1],arr[low]};
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
    pair<int,int> sol = floorAndCeil(arr, target);
    cout<<sol.first<<endl<<sol.second;
    return 0;
}