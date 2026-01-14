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



int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    maxRows(n,m,arr);
    return 0;
}