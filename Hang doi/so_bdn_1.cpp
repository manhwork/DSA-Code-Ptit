#include <bits/stdc++.h>
using namespace std;

bool check(const string a, const string b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    return a <= b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        queue<string> q;
        q.push("1");
        int cnt = 0;
        while (check(q.front(), s)) {
            cnt++;
            string number = q.front();
//            cout<<number<<endl;
            q.pop();
            q.push(number + "0");
            q.push(number + "1");
        }
        cout << cnt << endl;
    }
    return 0;
}
