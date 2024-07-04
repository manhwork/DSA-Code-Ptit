#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	scanf("\n");
	while(t--) {
		string s;
		getline(cin,s);
		stack<char> st;
		int ok;
		for(int i=0; i<s.size(); i++) {
			if(s[i]!=')') st.push(s[i]);
			else {
				ok=1;
				char top=st.top();
				st.pop();
				while(top!='(') {
					if(top=='+' ||  top=='-' ||  top=='*' ||  top=='/'  )
						ok=0;
						top=st.top();st.pop();
				}
				if(ok) break;
			}
		}
		if(ok) cout<<"Yes";
		else cout<<"No";
		cout<<endl;	
	}
}