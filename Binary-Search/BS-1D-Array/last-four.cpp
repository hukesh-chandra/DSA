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
    int low =0;
    int high = n-1;
    while (low<=high){
        int mid = low + (high - low)/2;
        
        if((mid==n-1 || arr[mid]<arr[mid+1]) && (arr[mid]<arr[mid-1] || mid == 0)){
            return mid;
        }

        //left is sorted
        if(arr[mid]<arr[high]){
            
            high = mid-1;
        }

        //right is sorted
        else if(arr[mid]>arr[low]){
            low = mid +1;
        }

    }
    
    return low;
}

int searchSingle(vector<int>& arr, int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Handle boundary cases
        if (mid == 0 && arr[mid] != arr[mid + 1]) return arr[mid];
        if (mid == n - 1 && arr[mid] != arr[mid - 1]) return arr[mid];

        // Check if arr[mid] is the single element
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        // Now decide which half to search
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
            (mid % 2 == 1 && arr[mid] == arr[mid - 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int peak(vector<int> arr,int n){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if(mid==0 || mid==n-1){
            break;
        }

        if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return arr[mid];
        }

        if(arr[mid]>arr[mid+1]){
            high =mid;
        }

        else if(arr[mid]>arr[mid-1]){
            low = mid;
        }

    }

    return low;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<peak(arr,n);
    return 0;
}