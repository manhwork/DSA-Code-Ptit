#include <bits/stdc++.h>
using namespace std;

int v,e,u;
vector<int> a[1001];
int datham[1001];

void dfs(int u){
	cout<<u<<" ";
	datham[u]=1;
	for(auto x : a[u]){
		if(!datham[x]){
			dfs(x);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;cin>>t;
	while(t--){
		cin>>v>>e>>u;
		for(int i=0;i<=1001;i++) a[i].clear();
		memset(datham,0,sizeof(datham));
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		dfs(u);
		cout<<endl;
	}
	return 0;
}