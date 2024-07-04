#include <bits/stdc++.h>
using namespace std;
#define ll long long

//1
//6 9
//1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6


int v,e;
vector<int> a[1005];
int datham[1005];
int truoc[1005];
int ok ;
int idx;

void dfs(int u) {
	datham[u] = 1;
	for(auto x : a[u]) {
		if(!datham[x]) {
			truoc[x]=u;
			dfs(x);
		} else {
			if(truoc[u] != x) {
				ok=0;
				idx = u;
				break;
			}
		}
	}
}

void Path() {
	ok=1;
	
	dfs(1);
	cout<<idx<<endl;
	if(ok) {
		cout<<"NO";
	} else {
		
		vector<int> path;
		
		int tmp = idx;
		while(tmp!=1) {
			path.push_back(tmp);
			tmp = truoc[tmp];
		}
		path.push_back(1);
		reverse(path.begin(),path.end());
		for(auto x : path) {
			cout<<x<<" ";
		}
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		cin>>v>>e;
		for(int i=0;i<1005;i++) a[i].clear();
		memset(datham,0,sizeof(datham));
		memset(truoc,0,sizeof(truoc));
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		Path();
	}
	return 0;
}