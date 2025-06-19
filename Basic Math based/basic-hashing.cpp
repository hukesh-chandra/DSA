
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void CountFrequency(int arr[],int n){
    int hash[100] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i =0; i<100;i++){
        if(hash[i]!=0){
            cout<<i<<' '<<hash[i]<<endl;
        }
    }

}

void HighLowFrequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}


int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    HighLowFrequency(arr, n);
    return 0;
}