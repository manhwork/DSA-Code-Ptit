#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;cin>>t;
	while(t--){
		vector<string> v;
		int n;
		cin>>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		while(q.front().size() <= n){
			string tmp;
			tmp=q.front();
			v.push_back(tmp);
			q.push(tmp + "6");
			q.push(tmp + "8");
			q.pop();
		}
		cout<<v.size()<<endl;
		for(auto x : v){
			cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}