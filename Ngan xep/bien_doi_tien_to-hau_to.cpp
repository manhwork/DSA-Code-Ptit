#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	scanf("\n");
	while(t--) {
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.size()-1; i>=0; i--) {
			if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/') {
				string tmp;
				string op1=st.top();
				st.pop();
				string op2=st.top();
				st.pop();
				tmp =  op1 + op2 + s[i];
				st.push(tmp);
			} else {
				st.push(string(1,s[i]));
			}
		}
		cout<<st.top()<<endl;
	}
}