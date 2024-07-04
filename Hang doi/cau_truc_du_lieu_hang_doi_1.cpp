#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	scanf("\n");
	while(t--) {
		int x;
		cin>>x;
		queue<int> qe;
		while(x--) {
			int a;
			cin>>a;
			if(a==3) {
				int b;
				cin>>b;
				qe.push(b);
			} else if(a==1)cout<<qe.size()<<endl;
			else if(a==2) {
				if(qe.empty()) cout<<"YES\n";
				else cout<<"NO\n";
			} else if(a==4) {
				if(!qe.empty()) qe.pop();
			} else if(a==5) {
				if(!qe.empty()) cout<<qe.front()<<endl;
				else cout<<"-1\n";
			} else if(a==6) {
				if(!qe.empty()) cout<<qe.back()<<endl;
				else cout<<"-1\n";
			}
		}
	}
}