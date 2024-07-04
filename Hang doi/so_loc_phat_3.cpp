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
			string TMP = q.front();
			v.push_back(TMP);
			q.push(TMP + "6");
			q.push(TMP + "8");
			q.pop();
		}
		cout<<v.size()<<endl;
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}