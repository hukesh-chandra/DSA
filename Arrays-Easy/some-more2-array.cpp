#include <bits/stdc++.h>
using namespace std;

int MaxConsecutive(vector<int> arr, int n)
{
    if (n == 0) return 0;

    int maxCon = 1;
    int current = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            ++current;
        } else {
            maxCon = max(maxCon, current);
            current = 1;
        }
    }
    maxCon = max(maxCon, current); 
    return maxCon;
}

int appearOnce(vector<int> &arr,int n){
    int onceNum=0;
    for(int i=0;i<n;i++){
        onceNum^=arr[i];
    }
    return onceNum;
}

int longestSubarraySumK(int n,int sum,vector<int> &arr){
    
    return;
}

int longestSubarraySumKN(int n,int sum,vector<int> &arr){
    
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}