#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
2
(A+(B+C))
((A*B)+C)
*/
int uutien(char c) {
	if(c=='(') return 0;
	else if( c=='+' or c=='-') return 1;
	else if(c=='*' or c=='/') return 2;
	else return 3;
}
void solve () {
	string s;
	cin>>s;
	stack<char> st;
	string tmp="";
	for(char c : s) {
		if(isalpha(c))  tmp+=c; // neu c la chu cai 
		
		else if( c == '(') st.push(c); // neu c la ( 
		
		else if(c== ')') { 
			while( !st.empty() and st.top() != '(' ){
				tmp+=st.top();
				st.pop();
			}
			st.pop(); // xoa dau ngoac don (
		}
		else {
			while( !st.empty() and uutien(st.top()) >= uutien(c) ){
				tmp+=st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while(!st.empty()){
		tmp+=st.top();
		st.pop();
	}
	cout<<tmp<<endl;
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