#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	scanf("\n");
	int x;
	string s;
	stack<int> v;
	while(t--) {
		cin>>s;
		if(s=="PUSH") {
			cin>>x;
			v.push(x);
		} else if(s=="POP") {
			if(!v.empty()) {
				v.pop();
			}
		} else if(s=="PRINT") {
			if(v.empty()) {
				cout<<"NONE";
			} else {
				cout<<v.top();
			}
			cout<<endl;
		}
	}
}
