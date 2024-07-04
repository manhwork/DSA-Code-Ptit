#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//3 2
//1 2
//2 3
//10 12
//1 2
//3 1
//3 4
//5 4
//3 5
//4 6
//5 2
//2 1
//7 1
//1 2
//9 10
//8 9



int v,e;
vector<ll> a[100001];
ll datham[100001];
ll cnt;
void dfs(ll u){
	cnt++;
	datham[u]=1;
	for(auto x : a[u]){
		if(!datham[x]){
			dfs(x);
		}
	}
}

void solve(){
	ll maxn=-1;
	memset(datham,0,sizeof(datham));
	for(ll i=1;i<=v;i++){
		if(!datham[i]){
			cnt=0;
			dfs(i);
			maxn=max(cnt,maxn);
		}
	}
	cout<<maxn<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--){
		for(int i=0;i<=100001;i++) a[i].clear();
		cin>>v>>e;
		while(e--){
			ll x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		solve();
	}
	return 0;
}