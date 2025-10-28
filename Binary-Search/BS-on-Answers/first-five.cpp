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

int calculatenum(vector<int> arr,int mid){
    int d =0;
    for(int a : arr){
        a-=mid;
        if(a<=0){
            d++;
        }
    }
    return d;
}

int bouquets(int n,vector<int> arr,int m,int k){
    int low =1;
    int high = findMax(arr);
    if(m*k>n){
        return -1;
    }
    

    while(low<=high){
        int mid = (low+high)/2;
        int num = calculatenum(arr,mid);
        if(n*m == num){
            return mid;
        }
        if(n*m<num){
            high =mid-1;
        }else{
            low =mid+1;
        }
    }
    return low;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a;
    cin>>a;
    vector<int> arr(a);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<kokobanana(n,arr,m);
    return 0;
}