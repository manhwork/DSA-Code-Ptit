#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=0;i<s.size();i++){
			if( s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' ){
				int tmp;
				int s1=st.top();st.pop();
				int s2=st.top();st.pop();
				if(s[i] == '+') tmp=s1+s2;
				else if(s[i] == '-') tmp=-s1+s2;
				else if(s[i] == '*') tmp=s1*s2;
				else if(s[i] == '/') tmp=s2/s1;
				st.push(tmp);
			}
			else {
				st.push(s[i]-'0');
			}
		}
		cout<<st.top()<<endl;
	}
}