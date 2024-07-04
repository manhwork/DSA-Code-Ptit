#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
Thuật toán TreeDfs(u):
Bước 1: Thực hiện DFS(u);
Bước 2 (Xuất kết quả):
- Nếu số đỉnh được duyệt bằng n thì xuất kết quả T;
- Nếu số đỉnh được duyệt nhỏ hơn n thì xuất thông
báo: “Không có cây khung”;
Bước 3 : sử dụng dfs d
*/

//2
//4 4 2
//1 2
//1 3
//2 4
//3 4
//4 2 2
//1 2
//3 4


int v,e,m;
vector<int> a[1005];
int datham[1005];
int truoc[1005];
vector<pair<int,int>> tree;

void dfs(int u){
	datham[u]=1;
	for(auto x : a[u]){
		if(!datham[x]){
			truoc[x]=u;
			tree.push_back({u,x});
			dfs(x);
		}
	}
}

void solve(){
	cin>>v>>e>>m;
	int ok=0;
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
	dfs(m);
	for(int i=1;i<=v;i++){
		if(!datham[i]){
			ok=1;break;
		}
	}
	if(ok) cout<<"-1\n";
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