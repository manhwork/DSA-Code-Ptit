#include <bits/stdc++.h>
using namespace std;
#define ll long long

//3
//((a)
//(a))
//(((abc))((d)))))

void solve() {
	string s;
	cin>>s;
	string tmp=s;
	stack<pair<string,int>> st;
	for(int i=0; i<s.size(); i++) {
		if(s[i]==')') {
			if(!st.empty() and st.top().first == "(" ) {
				s[i]='1';
				s[st.top().second] = '0';
				st.pop();
			} else {
				s.erase(i,1);
				s.insert(i,"-1");
			}
		} else if(s[i]=='(') st.push({string(1,s[i]),i});
	}
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='(') {
			s.erase(i,1);
			s.insert(i,"-1");
		}
	}
	cout<<s<<endl;
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