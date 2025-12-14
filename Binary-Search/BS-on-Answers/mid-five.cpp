#include <bits/stdc++.h>
using namespace std;

int findMax(const vector<int>& arr) {
    int maxi = INT_MIN;
    for (int val : arr) {
        maxi = max(maxi, val);
    }
    return maxi;
}

int findMin(const vector<int>& arr) {
    int mini = INT_MAX;
    for (int val : arr) {
        mini = min(mini, val);
    }
    return mini;
}

int Sum(const vector<int>& arr) {
    int total = 0;
    for (int val : arr) {
        total += val;
    }
    return total;
}

int checkDays(const vector<int>& weights, int capacity){
    int days = 1;
    int currentLoad = 0;
    for(int weight : weights){
        if(currentLoad + weight <= capacity){
            currentLoad += weight;
        } else {
            days++;
            currentLoad = weight;
        }
    }
    return days;
}

int shipCapacity(const vector<int>& weights, int days) {
    int low = findMax(weights);
    int high = Sum(weights);

    while(low<=high){
        int mid = low + (high-low)/2;
        int cdays = checkDays(weights,mid);
        if(cdays <= days){
            high = mid -1;
        } else {
            low = mid +1;
        }
    }
    return low;
}

int kthMissing(const vector<int>& arr, int k){
    int low = 0;
    int n = arr.size();
    int high = n-1;

    while(low<=high){
        int mid= low+ (high-low)/2;

        if(k<=arr[mid]-(mid+1)){
            high =mid-1;
        }else{
            low = mid+1;
        }
    }

    return k+high+1 ;
}

int gapCalc(const vector<int>& arr, int mid) {
    int cows = 1;              
    int lastPos = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - lastPos >= mid) {
            cows++;
            lastPos = arr[i];
        }
    }
    return cows;
}

int aggressiveCows(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());

    int low = 1;
    int high = arr.back() - arr.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int placed = gapCalc(arr, mid);

        if (placed >= k) {
            ans = mid;        
            low = mid + 1;    
        } else {
            high = mid - 1;   
        }
    }
    return ans;
}
      

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d;
    cin>>d;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<aggressiveCows(arr,d);
    return 0;
}