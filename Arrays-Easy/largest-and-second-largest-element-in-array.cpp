#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int LargestNumber(vector<int> &arr,int maxi = 0,int idx = 0){
    if(arr.size()==idx) return maxi;

    maxi = max(arr[idx],maxi);
    LargestNumber(arr,maxi,idx+1);
}

int SecondLargestNumber(vector<int> &arr,int n){
    if(n<2) return -1;
    int maxi;
    int smaxi;
    arr[0]>arr[1] ? maxi =arr[0] ,smaxi =arr[1] : maxi =arr[1] , smaxi =arr[0];
      for (int i = 2; i < n; i++) {
        if (arr[i] > maxi) {
            smaxi = maxi;
            maxi = arr[i];
        } else if (arr[i] > smaxi && arr[i] != maxi) {
            smaxi = arr[i];
        }
    }

    return (maxi == smaxi) ? -1 : smaxi;
}

int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LargestNumber(arr);
    return 0;
}