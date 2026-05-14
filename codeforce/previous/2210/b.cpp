#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int &x : p) cin >> x;

        vector<bool> marked(n+1, false);
        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(marked[i]) break;

            if(p[i-1] <= i){        
                cnt++;
                marked[p[i-1]] = true;
            }

        }

        cout << cnt << "\n";
    }
}