#include <bits/stdc++.h>
using namespace std;
/*
Bfs(u) {
	queue<int> q;
	q.push(u);
	vs[u] = 1;
	while(!q.empty()) {
		<Lấy v ra khỏi q>;
		Thăm(v);
		for i  ke(v) do
				<Đưa i vào q>;
		vs[i] = 1;
		e[i] = v;
	}
}
}

1
6 9 1
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6


*/

int v,e,n;
int datham[1005]= {0};
vector<int> a[1005];

void bfs(int u){
	queue<int> q;
	q.push(u);
	datham[u]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		cout<<v<<" ";
		for(auto x : a[v]){
			if(!datham[x]){
				q.push(x);
				datham[x]=1;
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
		cin>>v>>e>>n;
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		bfs(n);
		memset(datham,0,sizeof(datham));
		memset(a, 0, sizeof(a));
		cout<<endl;
	}
	return 0;
}