#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,23,44,24,34,423,2};
    cout<<arr.empty()<<endl;

    bool j = arr.empty();
    cout<<j<<endl;
    while(!arr.empty()){
        cout<<arr[0]<<" ";
        arr.erase(arr.begin());

    }
    return 0;
}