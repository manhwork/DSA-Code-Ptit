#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	scanf("\n");
	while(t--){
		string s;cin>>s;
		stack<char> st;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') st.push(s[i]);
			else {
				if(!st.empty() and st.top() == '('){
					cnt+=2;
					st.pop();
				}
			}
		}
		cout<<cnt<<endl;
	}
}