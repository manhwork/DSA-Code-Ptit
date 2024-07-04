#include<bits/stdc++.h>
using namespace std;

//1
//6 5
//1 2
//2 3
//3 4
//1 4
//5 6
//2
//1 5
//2 4

int v,e,s,t;
vector<int> a[1005];
int datham[1005];

void DFS(int u) {
	datham[u]=1;
	for(auto x : a[u]) {
		if( !datham[x]) {
			DFS(x);
		}
	}
}

void Path(int s,int t) {
	DFS(s);
	if(!datham[t]) {
		cout<<"NO";
	} else cout<<"YES";
	cout<<endl;
}


int main() {
	int T;
	cin>>T;
	while(T--) {
		memset(a,0,sizeof(a));
		cin>>v>>e;
		for(int i=0; i<e; i++) {
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int q;
		cin>>q;
		while(q--) {
			cin>>s>>t;
			memset(datham,0,sizeof(datham));
			Path(s,t);
		}
	}
}
