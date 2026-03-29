#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    int target;
    cin>>target;
    for(int &x: arr){
        cin>>x;
    }
    int tarIdx = -1;
    for(int i =0;i<num;i++){
        if(arr[i]==target){
            tarIdx =i;
        }
    }
    if(tarIdx == -1){
        cout<<"not present";
        return 0;
    }
    for(int i = tarIdx;i<num-1;i++){
        swap(arr[i],arr[i+1]);
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}  
