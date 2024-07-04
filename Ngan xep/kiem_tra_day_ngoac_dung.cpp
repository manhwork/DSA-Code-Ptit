#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//[()]{}{[()()]()}
//[(])


void solve() {
	string s;
	cin>>s;
	stack<char> st;
	int ok=1;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='[' or s[i]=='(' or s[i]=='{' ) {
			st.push(s[i]);
		} else {
			if(!st.empty() and (( s[i]==')' and st.top()=='(') or
			                    ( s[i]==']' and st.top()=='[' ) or
			                    ( s[i]=='}' and st.top()=='{' ))) {
				st.pop();
			} else ok=0;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		solve();
	}
	return 0;
}