#include <bits/stdc++.h>
using namespace std;
#define ll long long

//1
//6 9  
//1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4

int v,e;
vector<int> a[1001];
int datham[1001];
int tt[1001]; // trạng thái của đỉnh 
int ok;

int dfs(int u){
	datham[u]=1;
	for(int x : a[u]){
		if(!datham[x]){
			tt[x] = 1 ;
			if( dfs(x) ) return 1;
		}
		else {
			if( tt[x] == 1) return 1;
		}
	}
	tt[u] = 2;
	return 0;
}

int check(){
	for(int i=1;i<=v;i++){
		if(!datham[i]){
			if( dfs(i) ) return 1;
		}
	}
	return 0;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		cin>>v>>e;
		for(int i=0; i<=1001; i++) a[i].clear();
		memset(datham,0,sizeof(datham));
		memset(tt,0,sizeof(tt));
		while(e--) {
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		if(check()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}