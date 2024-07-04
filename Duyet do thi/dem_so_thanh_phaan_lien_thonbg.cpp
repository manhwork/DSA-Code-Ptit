#include <bits/stdc++.h>
using namespace std;
/*
1
5 6 
1 2 1 3 2 3 3 4 3 5 4 5
*/
int v,e;
vector<int> a[1005];
int datham[1005];

void dfs(int u){
	datham[u]=1;
	for( auto x : a[u]){
		if(!datham[x]){
			datham[x]=1;
			dfs(x);
		}
	}
}

void tplt(){
	int cnt=0;
	for(int i=1;i<=v;i++){
		if(!datham[i]){
			cnt++;
			dfs(i);
		}
	}
	cout<< cnt<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;cin>>t;
	while(t--){
		cin>>v>>e;
		memset(datham,0,sizeof(datham));
		for(int i=0;i<=1001;i++) a[i].clear();
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		tplt();
	}
	
	return 0;
}