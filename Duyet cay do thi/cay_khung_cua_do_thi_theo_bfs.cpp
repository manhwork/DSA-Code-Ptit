#include <bits/stdc++.h>
using namespace std;
#define ll long long

int v,e,m;
vector<int> a[1005];
int datham[1005];
int truoc[1005];
vector<pair<int,int>> tree;

void bfs(int u){
	queue<int> q;
	q.push(u);
	datham[u]=1;
	while(!q.empty()){
		int tmp=q.front();q.pop();
		for(auto x : a[tmp]){
			if(!datham[x]){
				truoc[x]=tmp;
				datham[x]=1;
				tree.push_back({tmp,x});
				q.push(x);
			}
		}
	}
}

void solve(){
	cin>>v>>e>>m;
	for(int i=0;i<1005;i++) a[i].clear();
	memset(datham,0,sizeof(datham));
	memset(truoc,0,sizeof(truoc));
	tree.clear();
	while(e--){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bfs(m);
	if(tree.size()!=v-1) cout<<"-1\n";
	else {
		for(auto x : tree){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}