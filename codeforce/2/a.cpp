#include <bits/stdc++.h>
using namespace std;

void printe(vector<int> arr){
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int &x:arr){
            cin>>x;
        }

        vector<int> s(n, 0);

        for(int i = 0; i < n; i++){
            int g = 0;
            int smaller = 0;
            int e = 0;

            for(int j = i+1; j < n; j++){
                if(arr[j] > arr[i]){
                    g++;
                }else if(arr[j] == arr[i]){
                    e++;
                }else{
                    smaller++;
                }
            }

            s[i] = max(g, smaller + e); 
        }

        printe(s);
    }

    return 0;
}