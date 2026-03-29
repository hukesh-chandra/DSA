#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int &x: arr){
        cin>>x;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i<num;i++){
        int times = 0;
        while(1){
            if(arr[i]==arr[i+1]){
                times++;
                i++;
            }else{
                times++;
                cout<<arr[i]<<" "<<times<<" times";
                break;
            }
        }
        cout<<endl;
    }
}