#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        bool ok = true;


        if(n % 2 == 1 && s[0] == 'b') ok = false;

        int start = n % 2;
        
        for(int i = start; i + 1 < n && ok; i += 2){
            if(s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1])
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}