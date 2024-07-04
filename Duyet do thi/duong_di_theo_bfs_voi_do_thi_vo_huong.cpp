#include<bits/stdc++.h>
using namespace std;

/*

1
6 9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

*/

int v,e,s,t;
vector<int> a[1005];
int parent[1005];
int datham[1005];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	datham[u]=1;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for(auto i : a[x]) {
			if(!datham[i]) {
				parent[i]=x;
				q.push(i);
				datham[i]=1;
			}
		}
	}
}


void Path(int s,int t) {
	BFS(s);

	if(!datham[t]) {
		cout<<"-1"<<endl;
	} else {
		vector<int> path;

		while(t!=s) {
			path.push_back(t);
			t=parent[t];
		}

		path.push_back(s);
		for(int i=path.size()-1; i>=0; i--) {
			cout<<path[i]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		cin>>v>>e>>s>>t;
		memset(parent,0,sizeof(parent));
		memset(datham,0,sizeof(datham));
		for(int i=0; i<=1001; i++) a[i].clear();
		for(int i=1; i<=e; i++) {
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		Path(s,t);
	}
}