#include <bits/stdc++.h>
using namespace std;

void MoveZeroToEnd(vector<int> &arr,int n){
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]==0){
    //         int temp =i;
    //         while(temp<n-1){
    //             swap(arr[temp],arr[temp+1]);
    //             ++temp;
    //         }
    //     }
    // }
    int j =0;

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            ++j;
        }
    }

    
}

void LinearSearch(vector<int> &arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}


vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  map < int, int > freq;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto & it: freq)
    Union.push_back(it.first);
  return Union;
}


int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}


int main() {
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}