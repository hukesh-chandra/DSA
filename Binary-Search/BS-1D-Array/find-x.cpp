#include <bits/stdc++.h>
using namespace std;

pair<int,int> slicer(vector<int> &arr, int target, int idxS, int idxL) {
    int mid = (idxS + idxL) / 2;

    if (arr[mid] < target) {
        idxS = mid + 1;
    } else {
        idxL = mid;
    }
    return {idxS, idxL};
}

int findX(vector<int> &arr, int target) {
    int idxS = 0;
    int idxL = arr.size();

    while (idxS < idxL) {
        pair<int,int> p = slicer(arr, target, idxS, idxL);
        idxS = p.first;
        idxL = p.second;
    }
    return arr[idxS]==target?idxS:-1;
}

int main() {
    int n = 9;
    vector<int> arr = {3,4,6,7,8,9,10,11,12,13,14,15};

    int pos = findX(arr, n);

    if (pos < arr.size() && arr[pos] == n)
        cout << "Found at index: " << pos;
    else
        cout << "Not found, insert position: " << pos;

    return 0;
}
