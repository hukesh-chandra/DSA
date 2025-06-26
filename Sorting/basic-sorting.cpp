#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[min])
            min = j;
        }
        swap( arr[i], arr[min] );
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}

void BubbleSort(vector<int> &arr,int n){
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        
    }
}

void InsertionSort(int arr[],int n){
    for(int i =1;i<n;i++){
        int ind = i;
        while(ind>0 && arr[ind]<arr[ind-1]){
            swap(arr[ind],arr[ind -1]);
            --ind;
        }
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<' ';
    }


}

void Merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
    int left = start;
    int right = mid+1;
    while(right<=end && left<=mid){
        if(arr[left]>=arr[right]){
            temp.push_back(arr[right]);
            right++;
        }else{
            temp.push_back(arr[left]);
            left++;
        }
    }

    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }

    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    for(int i =0; i<temp.size();i++){
        arr[start+ i]=temp[i];
    }
    
}

void MergeSort(vector<int> &arr,int start,int end){
    if(start<end){
        int mid = start + (end-start)/2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);

        Merge(arr,start,mid,end);
    }
    else return;
}

void RecursiveBubbleSort(vector<int> &arr,int n){
    if(n==1)return;
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        
        RecursiveBubbleSort(arr,n-1);
    
}

void RecursiveInsertionSort(vector<int> &arr,int n){
    if(n<=1) return;

    RecursiveInsertionSort(arr,n-1);
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-1], that are greater than last
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;

}


int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int idx = low -1;

    for(int j= low; j<high;j++){
        if(arr[j]<= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[high],arr[idx]);
    return idx;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}