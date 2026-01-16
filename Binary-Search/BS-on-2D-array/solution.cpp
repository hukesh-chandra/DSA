#include <bits/stdc++.h>
using namespace std;

void maxRows(int n ,int m , vector<vector<int>> arr){
    int cmaxIdx = -1;
    int cmax =-1;

    for(int i =0;i<n;i++){
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[i][mid] != 1){
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
        if(low<m && arr[i][low]==1 && (cmax==-1 || low<cmax)){
            cmaxIdx = i;
            cmax = low;
        }
    }
    cout<<cmaxIdx;
}

void search2d(int n, int m, vector<vector<int>> arr, int k) {
    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int r = mid / m;
        int c = mid % m;

        if (arr[r][c] == k) {
            cout << "true";
            return;
        } else if (arr[r][c] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "false";
}

void search2d1(int n, int m, vector<vector<int>> arr, int k) {
    int i = 0, j = m - 1;

    while (i < n && j >= 0) {
        if (arr[i][j] == k) {
            cout << "true";
            return;
        } 
        else if (arr[i][j] > k) {
            j--;   
        } 
        else {
            i++;  
        }
    }

    cout << "false";
}

void peak(int n,int m,vector<vector<int>> arr){
    int low = 0;
    int high = m-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int colMax = INT_MIN;
        int colMaxIdx = -1;
        for(int i = 0;i<n;i++){
            if(colMax<arr[i][mid]){
                colMax = arr[i][mid];
                colMaxIdx = i;
            }
        }

        if(mid+1<m && colMax<arr[colMaxIdx][mid+1]){
            low = mid+1;
        }else if(mid-1>=0 && colMax<arr[colMaxIdx][mid-1]){
            high =mid-1;
        }else{
            cout<<mid<<" "<<colMaxIdx;
            return;
        }

    }
}

int medianSorted(int n, int m, vector<vector<int>>& arr) {

    int low = INT_MAX, high = INT_MIN;

    // Find value range
    for (int i = 0; i < n; i++) {
        low = min(low, arr[i][0]);
        high = max(high, arr[i][m - 1]);
    }

    int req = (n * m) / 2;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cnt += upper_bound(arr[i].begin(), arr[i].end(), mid)
                   - arr[i].begin();
        }

        if (cnt <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //maxRows(n,m,arr);
    search2d1(n,m,arr,k);
    return 0;
}