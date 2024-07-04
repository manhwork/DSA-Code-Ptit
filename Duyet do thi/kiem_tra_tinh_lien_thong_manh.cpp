#include <bits/stdc++.h>
using namespace std;

/*

1
6 9 
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 3
*/
int v,e;
vector<int> a[1001];
int datham[1001];
int cnt;

void dfs(int u) {
	cnt++;
	datham[u]=1;
	for(auto x : a[u]) {
		if(!datham[x]) {
			datham[x]=1;
			dfs(x);
		}
	}
}

int check() {
	for(int i=1; i<=v; i++) {
		memset(datham,0,sizeof(datham));
		cnt=0;
		dfs(i);
//		cout<<cnt<<endl;
		if(cnt!=v){
			return 0; 
		}
	}
	return 1;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		cin>>v>>e;
		for(int i=0;i<=1001;i++) a[i].clear();
		while(e--){
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