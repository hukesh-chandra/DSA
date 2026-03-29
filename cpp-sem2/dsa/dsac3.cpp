#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int &x: arr){
        cin>>x;
    }

    vector<pair<int,int>> sol((num+1)/2);

    int low = 0;
    int high = num-1;

    while(low<=high){
        if(low == high){
            sol[low].first = arr[low];
            sol[low].second = 0;
            break;
        }

        sol[low].first = arr[low];
        sol[low++].second = arr[high--];
    }

    for(pair<int,int> x: sol){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}