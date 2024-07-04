#include <bits/stdc++.h>
using namespace std;


//1
//
//6  6 
//
//1 2 1 3 2 3 3 4 3 5 4 5
int v,e;
vector<int > a[1001];
int datham[1001];

void bfs(int u){
	queue<int> q;
	q.push(u);
	datham[u]=1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto i : a[x]){
			if(!datham[i]){
				datham[i]=1;
				q.push(i);
			}
		}
	}
}

void tplt(){
	int cnt=0;
	for(int i=1;i<=v;i++){
		if(!datham[i]){
			cnt++;
			bfs(i);
		}
	}
	cout<<cnt<<endl;
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
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		tplt();
	}
	
	return 0;
}