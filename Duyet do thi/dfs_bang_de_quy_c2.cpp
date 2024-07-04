#include<bits/stdc++.h>
using namespace std;

int v,e,n;
int datham[1001]={0};
vector<int> a[1005];

void dfs(int u){
	cout<<u<<" ";
	datham[u]=1;
	for(int v : a[u]){
		if(!datham[v]){
			dfs(v);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e>>n;
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		dfs(n);
		memset(datham,0,sizeof(datham));
		a[1005].clear();
	}
}