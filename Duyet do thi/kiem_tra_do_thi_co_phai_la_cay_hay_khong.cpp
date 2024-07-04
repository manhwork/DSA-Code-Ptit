#include <bits/stdc++.h>
using namespace std;
#define ll long long

//KIỂM TRA ĐỒ THỊ CÓ PHẢI LÀ CÂY HAY KHÔNG ? 
//ta kiểm tra xem đồ thị này ko có chu trình => cây 
//nếu có thì ngược lại 

//2
//4
//1 2
//1 3
//2 4
//4
//1 2
//1 3
//2 3

int v,e;
vector<int> a[1001];
int datham[1001];
int truoc[1001];

int dfs(int u){
	datham[u]=1;
	for(int x : a[u]){
		if(!datham[x]){
			truoc[x] = u;
			if(dfs(x)) return 1;
		}
		else {
			if( truoc[u] != x) return 1;
		}
	}
	return 0;
}

int check(){
	for(int i=1;i<=v;i++){
		if(!datham[i]){
			if(dfs(i)) return 0;
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
	while(t--){
		cin>>v;
		e = v-1 ;
		for(int i=0;i<=1001;i++) a[i].clear();
		memset(datham,0,sizeof(datham));
		memset(truoc,0,sizeof(truoc));
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		if(check()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}