#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size();
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        if (target > arr[mid])
        {
            low = mid + 1; 
        }
        else
        {
            high = mid; 
        }
    }
    return low;
}

int upperBound(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size();
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (target == arr[mid])
        {
            return high-mid;
        }
        if (target > arr[mid])
        {
            low = mid + 1; 
        }
        else
        {
            high = mid; 
        }
    }
    return high-low;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << lowerBound(arr, x)<<"\n"<<upperBound(arr,x);
    return 0;
}