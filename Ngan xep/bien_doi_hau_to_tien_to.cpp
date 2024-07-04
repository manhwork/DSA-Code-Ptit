#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	string s;
	cin>>s;
	stack<string> st;
	for(char c : s){
		if(c=='+' or c=='-' or c=='*' or c=='/'){
			string op1 = st.top();st.pop();
			string op2 = st.top();st.pop();
			string tmp = c + op2 + op1;
			st.push(tmp);
		}
		else st.push(string(1,c));
	}
	cout<<st.top()<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}