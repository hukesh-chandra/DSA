#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotateToRight(vector<int> &arr,int n,int k){
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}

void rotateToLeft(vector<int> &arr,int n,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

int secondLargest(vector<int> arr){
    int cL = INT_MIN;
    int sL = INT_MIN;
    for(int x: arr){
        if(x > cL){
            sL = cL;
            cL = x;
            
        }else if(x>sL && x<cL){
            sL = x;
        }
    }
    return sL;
}

int secondSmallest(vector<int> arr){
    int cS = INT_MAX;
    int sS = INT_MAX;
    for(int x: arr){
        if(x < cS){
            sS = cS;
            cS = x;
            
        }else if(x<sS && x>cS){
            sS = x;
        }
    }
    return sS;
}

int main(){
    int num;
    cin>>num;
    // int k;
    // cin>>k;
    vector<int> arr(num);
    for(int&x:arr){
        cin>>x;
    }
    // rotateToRight(arr,num,k);
    // for(int x:arr){
    //     cout<<x<<" ";
    // }
    cout<<secondSmallest(arr);
    return 0;
}