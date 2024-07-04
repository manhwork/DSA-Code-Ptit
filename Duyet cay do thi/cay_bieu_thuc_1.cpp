#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//ab+ef*g*-
//wlrb+-*

string s;
void solve() {
	stack<string> st;
	for(int i=0; i<s.size(); i++) {
		if( s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
			string op1 = st.top();
			st.pop();
			string op2 = st.top();
			st.pop();
			string tmp = op2  + s[i] + op1 ;
			st.push(tmp);
		}
		else st.push(string(1,s[i]));
	}
	cout<<st.top()<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		cin>>s;
		solve();
	}
	return 0;
}