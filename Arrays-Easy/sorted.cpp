#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool CheckSort(vector <int> &arr, int n){
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
void LeftRotateByOne(vector<int> &arr,int n){
    int i =0;
    while(i<n-1){
        swap(arr[i],arr[i+1]);
        i++;
    }
}

int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

void Reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void RotateToRight(vector<int> &arr,int n,int k){
    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);
}

void RotateToLeft(vector<int> &arr,int n,int k){
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
}

int main(){
    int n;
    cin>>n; 
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<CheckSort(arr,n);
    return 0;
}