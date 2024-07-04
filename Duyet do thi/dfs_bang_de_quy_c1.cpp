#include <bits/stdc++.h>
using namespace std;
/*
Thuat toan DFS bang de quy :
Dfs(u) {
	<Tham dinh u>
	visited[u] = 1;
	for v  ke(u) do
			if (vs[v] = 0) {
				Dfs(v);
			}
}

1
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6

*/

int v,e,n;
int datham[1005]= {0};
int a[1005][1005]= {};

void dfs(int u) {
	cout<<u<<" ";
	datham[u]=1;
	for(int i=1; i<=v; i++) {
		if( !datham[i] and a[u][i]  ) {
			dfs(i);
			a[u][i]=0;
		}
	}
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>v>>e>>n;
		for(int i=1; i<=e; i++) {
			int x,y;
			cin>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		dfs(n);
		cout<<endl;
		memset(a,0,sizeof(a));
		memset(datham,0,sizeof(datham));
	}
}