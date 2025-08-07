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

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int getLongestSubarraya(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
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