#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		cin.ignore();
		string s;
		cin>>s;
		map<char,int> map;
		priority_queue<int> q;
		for(int i=0;i<s.size();i++){
			map[s[i]]++;
		}
		vector<int> v;
		for(auto x : map){
			q.push(x.second);
		}
		while(k--){
			if(q.empty()) break;
			int x=q.top();q.pop();
			x--;
			q.push(x);
		}
		long long tong=0;
		while(!q.empty()){
			long long ans=q.top();q.pop();
			tong+=ans*ans;
		}
		cout<<tong<<endl;
	}	
	return 0;
}