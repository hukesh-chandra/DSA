#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;

        cin >> n >> k;
        cin >> s;

        vector<int> ans(n, 0);

        stack<int> st;
        int pairs = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (!st.empty()) {
                    st.pop();
                    pairs++;
                }
            }
        }

        int d = min(k, pairs);

        while (d--) {
            vector<int> match(n, -1);

            while (!st.empty()) st.pop();

            for (int i = 0; i < n; i++) {
                if (ans[i]) continue;

                if (s[i] == '(') {
                    st.push(i);
                } else {
                    if (!st.empty()) {
                        int j = st.top();
                        st.pop();

                        match[i] = j;
                        match[j] = i;
                    }
                }
            }

            int pos = -1;

            for (int i = 0; i < n; i++) {
                if (ans[i]) continue;
                if (s[i] != '(') continue;
                if (match[i] == -1) continue;

                int r = match[i];

                bool ok = true;

                for (int j = i + 1; j < r; j++) {
                    if (ans[j]) continue;

                    if (s[j] == '(' && match[j] != -1 && match[j] < r) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    pos = r;
                    break;
                }
            }

            ans[pos] = 1;
        }

        for (int x : ans) cout << x;
        cout << '\n';
    }
}