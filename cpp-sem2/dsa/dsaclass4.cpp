#include <bits/stdc++.h>
using namespace std;

void insertMissing(vector<int> &arr){
    for(int i=0; i<arr.size()-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff>0){
        for(int j=0;j<diff-1;j++){
            arr.insert(arr.begin()+i+j+1,arr[i]+j+1);
        }
        i+=diff-1;
        }else{
            diff = abs(diff);   

            for(int j = 0; j < diff - 1; j++){
            arr.insert(arr.begin() + i + j + 1, arr[i] - j - 1);
        }
        i += diff - 1;
        }

    }
}

void printArr(vector<int> arr){
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int &x: arr){
        cin>>x;
    }
    vector<int> oArr;
    vector<int> eArr;
    for(int x:arr){
        if(x%2==0){
            eArr.push_back(x);
        }else{
            oArr.push_back(x);
        }
    }

    insertMissing(oArr);
    insertMissing(eArr);

    printArr(eArr);
    printArr(oArr);


    sort(eArr.begin(),eArr.end());
    sort(oArr.begin(),oArr.end());

    insertMissing(oArr);
    insertMissing(eArr);

    printArr(eArr);
    printArr(oArr);

    return 0;
}