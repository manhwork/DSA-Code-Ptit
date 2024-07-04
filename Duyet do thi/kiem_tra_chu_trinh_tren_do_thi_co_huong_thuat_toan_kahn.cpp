#include <bits/stdc++.h>
using namespace std;
#define ll long long

//1
//
//6 9  
//
//1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4

int v,e;
vector<int> a[1001];
int bbv[1001]; // bán bậc vào 
int cnt=0; // dem so dinh ma thuat toan kahn duyet

void kahn(){
	queue<int> q;
	for(int i=1;i<=v;i++){
		if(bbv[i]==0) q.push(i);
	}
	while(!q.empty()){
		cnt++;
		int u=q.front();
		q.pop();
		for(auto x : a[u]){
			bbv[x]--;
			if(bbv[x]==0){
				q.push(x);
			}
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
		cnt=0;
		cin>>v>>e;
		for(int i=0;i<1001;i++) a[i].clear();
		memset(bbv,0,sizeof(bbv));
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			bbv[y]++;
		}
		kahn();
		if(cnt == v) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
	return 0;
}