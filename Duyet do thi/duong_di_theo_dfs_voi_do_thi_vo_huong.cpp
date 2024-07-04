#include<bits/stdc++.h>
using namespace std;

int v,e,s,t;
vector<int> a[1005];
int datham[1005]={0};
int parent[1005]={0};

void DFS(int u){
	datham[u]=1;
	for(auto x : a[u]){
		if( !datham[x]){
			parent[x]=u;
			DFS(x);
		}
	}
}

void Path(int s,int t){
	DFS(s);
	
	if(!datham[t]){
		cout<<"-1\n";
	}
	else {
		vector<int> path;
		
		while( t != s){
			path.push_back(t);
			t=parent[t];
		}
		
		path.push_back(s);
		for(int i=path.size()-1;i>=0;i--){
			cout<<path[i]<<" ";
		}
		cout<<endl;
	}
}


int main(){
	int T;cin>>T;
	while(T--){
		cin>>v>>e>>s>>t;
		for(int i=0;i<e;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		Path(s,t);
		
		memset(datham,0,sizeof(datham));
		memset(parent,0,sizeof(parent));
		memset(a,0,sizeof(a));
	}
}
