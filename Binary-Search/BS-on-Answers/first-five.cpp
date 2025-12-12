#include <bits/stdc++.h>
using namespace std;

int fsroot(int n) {
    int low = 1, high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid * mid <= n) {
       
            low = mid + 1;    
        } else {
            high = mid - 1;   
        }
    }

    return high;
}

int nthRoot(int n, int m) {
    int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long val = pow(mid, n);

        if (val == m) return mid;
        else if (val < m) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int findMax(vector<int> a){
    int maxi = INT_MIN;
    for(int i = 0;i<a.size();i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}

int calculateHour(vector<int> a,int r){
    int h=0;
    for(int i =0;i<a.size();i++){
        h += ceil((double)a[i]/r);
    }
        return h;
}

int kokobanana(int n,vector<int> a,int h){
    int low = 1; 
    int high = findMax(a);

    while(low<=high){
        int mid = (low+high)/2;
        int hour = calculateHour(a,mid);
        if(hour<=h){
            
            high= mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int calculatenum(const vector<int>& arr, int day, int k) {
    int bouquets = 0;
    int consec = 0;
    for (int val : arr) {
        if (val <= day) {
            consec++;
            if (consec == k) {
                bouquets++;
                consec = 0;
            }
        } else {
            consec = 0;
        }
    }
    return bouquets;
}

int bouquets(int n, const vector<int>& arr, int m, int k) {
    if (1LL * m * k > n) return -1;

    int low = 0;                        
    int high = findMax(arr);
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int num = calculatenum(arr, mid, k);
        if (num >= m) {                  
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, m, a;
    if (!(cin >> k >> m >> a)) return 0;

    vector<int> arr(a);
    for (int i = 0; i < a; ++i) cin >> arr[i];

    cout << bouquets(a, arr, m, k) << '\n';
    return 0;
}