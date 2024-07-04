#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string s;
	cin>>s;
	stack<int> st;
	int dem =1;
	st.push(dem);
	for(char c : s) {
		if(c=='D') {
			dem++;
			st.push(dem);
		} else {
			int k=0;
			while(!st.empty()) {
				cout<<st.top();
				st.pop();
				k++;
			}
			dem++;
			st.push(dem);
		}
	}
	while(!st.empty()) {
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}