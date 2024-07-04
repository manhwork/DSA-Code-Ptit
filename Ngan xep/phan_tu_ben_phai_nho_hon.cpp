#include <bits/stdc++.h>
using namespace std;
#define ll long long


//2
//7
//5 1 9 2 5 1 7
//8
//4 8 2 1 9 5 6 3

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+1];
        int gre[n+1];
        int les[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        stack<int> st;

        // Tìm phần tử lớn đầu tiên bên phải
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[i] >= a[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                gre[i] = -1;
            } else {
                gre[i] = st.top();
            }
            st.push(i);
        }

        // Xóa stack để tái sử dụng
        while (!st.empty()) {
            st.pop();
        }

        // Tìm phần tử nhỏ đầu tiên bên phải
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[i] <= a[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                les[i] = -1;
            } else {
                les[i] = st.top();
            }
            st.push(i);
        }

        // Xuất kết quả yêu cầu
        for (int i = 0; i < n; i++) {
            if (gre[i] == -1) {
                cout << -1 << " ";
            } else if (les[gre[i]] == -1) {
                cout << -1 << " ";
            } else {
                cout << a[les[gre[i]]] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}