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

        vector<int> s(n);

        if(n==1){
            s[n-1] = 0;
            printe(s);
            continue;
        }
        if(n==2){
            s[n-2] = 1;
            printe(s);
            continue;
        }
        if(n==3){
            s[n-3] = 0;
            printe(s);
            continue;
        }

        for(int i = 0;i<n-3;i++){
            int g = 0;
            int smaller = 0;
            int e = 0;
            for(int j = i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    g++;
                }else if(arr[j]==arr[i]){
                    e++;
                }else{
                    smaller++;
                }
            }
            int t1 = max(g,smaller);
            s[i] = t1;
        }

        printe(s);
    }

    return 0;
}