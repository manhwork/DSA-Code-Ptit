#include <bits/stdc++.h>
using namespace std;

//10 12
//W........WW.
//.WWW.....WWW
//....WW...WW.
//.........WW.
//.........W..
//..W......W..
//.W.W.....WW.
//W.W.W.....W.
//.W.W......W.
//..W.......W.

int n,m;
int a[105][105];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void ql(int i,int j){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 and i1<=n and j1>=1 and j1<=m and a[i1][j1]){
			ql(i1,j1);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n>>m;
	memset(a,0,sizeof(a));
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;cin>>c ;
			if(c=='W') a[i][j]=1;
			else a[i][j]=0;
		}
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]){
				ql(i,j);
				dem++;
			}
		}
	}
	cout<<dem<<endl;
	return 0;
}