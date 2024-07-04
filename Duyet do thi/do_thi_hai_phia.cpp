#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Muôn chứng minh đồ thị hai phía thì cm đồ thị chỉ tô được 2 màu 


int v,e;
vector<int> a[1005];
int color[1005];
int truoc[1005];
int ok;
int datham[1005];
//color = 1 tuc la mau do 
//color = 2 tuc la mau xanh 

//2
//5 4
//1 5
//1 3
//2 3
//4 5
//3 3
//1 2
//1 3
//2 3

void bfs(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int top = q.front(); q.pop();
		color[top] = 3 - color[truoc[top]];
		for(auto x : a[top]){
			if(!color[x]){
				color[x] = 3 - color[truoc[x]];
				q.push(x);
				truoc[x]=top;
			}
			else {
				if(color[x]==color[truoc[x]]){
					ok=0;
					break;
				}
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
		cin>>v>>e;
		ok=1;
		for(int i=0;i<1005;i++){
			a[i].clear();
		}
		memset(datham,0,sizeof(datham));
		memset(truoc,0,sizeof(truoc));
		memset(color,0,sizeof(color));
		color[0]=2;
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=v;i++){
			if(!color[i]){
				bfs(i);
			}
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}