#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> arr(num);
    for (int &x : arr) {
        cin >> x;
    }

    int dub = 0;

    for (int i = 0; i < num - dub; i++) {
        for (int j = i + 1; j < num - dub; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < num - dub - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                dub++;
            } else {
                j++;
            }
        }
    }

    for (int i = 0; i < num - dub; i++) {
        cout << arr[i] << " ";
    }
}
