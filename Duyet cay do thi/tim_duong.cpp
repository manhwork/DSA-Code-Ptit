#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
/*
2
5 5
..S..
****.
T....
****.
.....
5 5
S....
****.
.....
.****
..T..
*/

char a[501][501];
int dx[4]= {-1,0,0,1};
int dy[4]= {0,-1,1,0};
char huong[4]= {'B','T','D','N'};
int ok;
int n,m;
pair<int,int> p1;
pair<int,int> p2;
int datham[501][501];

void dfs(int x,int y,int cnt,char c) {
	datham[x][y]=1;
	if( x==p2.fi && y==p2.se && cnt<=3 ) {
		ok=1;
		return ;
	}
	if( cnt>3 ||  (x==p2.fi && y==p2.se) ) {
		datham[x][y]=0;
		return ;
	}
	for(int k=0; k<4; k++) {
		int x1= x + dx[k];
		int y1= y + dy[k];
		if(x1 >= 1 && y1>=1 && x1<=n && y1<=m && a[x1][y1]!='*' && !datham[x1][y1]) {
			if(huong[k] != c) {
				dfs(x1,y1,cnt+1,huong[k]);
			} else dfs(x1,y1,cnt,c);
		}
	}
	datham[x][y]=0;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		ok=0;
		memset(datham,0,sizeof(datham));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin>>a[i][j];
				if(a[i][j]=='S') {
					p1.fi=i;
					p1.se=j;
				}
				if(a[i][j]=='T') {
					p2.fi=i;
					p2.se=j;
				}
			}
		}
		dfs(p1.fi,p1.se,0,'X');
		
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}