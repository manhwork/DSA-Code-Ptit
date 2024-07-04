#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	scanf("\n");
	while(t--) {
		string s;
		cin>>s;
		long long cnt=0;
		if(s[0]==')') {
			cnt++;
			s[0]='(';
		}
		if(s[s.size()-1]=='(') {
			cnt++;
			s[s.size()-1] =')';
		}
		stack<char> st;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='(') st.push(s[i]);
			else {
				if(!st.empty() and st.top() == '(') {
					st.pop();
				}
				else if(!st.empty() and st.top() == ')'){
					cnt++,
					st.pop();
				}
				else if(st.empty()){
					cnt++;
					st.push('(');
				}
			}
		}
		cnt+=st.size()/2;
		cout<<cnt<<endl;
	}
}