#include <bits/stdc++.h>
using namespace std;

//1
//6  9  1  6
//1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

int v,e,s,t;
int datham[1001];
vector<int> a[1001];
int truoc[1001];

void dfs(int u){
	datham[u]=1;
	for(int x : a[u]){
		if(!datham[x]){
			truoc[x]=u;
			dfs(x);
		}
	}
}

void Path(int s,int t){
	dfs(s);
	if(!datham[t]){
		cout<<"-1";
	}
	else {
		vector<int> path;
		while(t!=s){
			path.push_back(t);
			t=truoc[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int x : path){
			cout<<x<<" ";
		}
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m; 
	cin>>m;
	while(m--){
		cin>>v>>e>>s>>t;
		memset(datham,0,sizeof(datham));
		memset(truoc,0,sizeof(truoc));
		for(int i=0;i<=1001;i++) a[i].clear();
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		Path(s,t);
	}
	return 0;
}