#include<bits/stdc++.h>
using namespace std;
bool is_Operator(char c){
	return (c=='+' or c=='-' or c=='*' or c=='/' );
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(!is_Operator(s[i])){
				st.push(string(1,s[i]));
			} 
			else {
				string tmp="";
				string top=st.top();st.pop();
				tmp+='(' + top + s[i] + st.top() + ')';
				st.pop();
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
}