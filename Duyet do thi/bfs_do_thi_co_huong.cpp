#include <bits/stdc++.h>
using namespace std;

//1
//6  9  1
//1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

int v,e,u;
vector<int> a[1001];
int datham[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	datham[u]=1;
	while(!q.empty()){
		int x = q.front();
		cout<<x<<" ";
		q.pop();
		for(auto i : a[x]){
			if(!datham[i]){
				q.push(i);
				datham[i]=1;
			}
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
		memset(datham,0,sizeof(datham));
		for(int i=0;i<=1001;i++) a[i].clear();
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		bfs(u);
		cout<<endl;
	}
	return 0;
}