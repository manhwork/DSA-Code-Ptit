#include <bits/stdc++.h>
using namespace std;

int a[1000][1000]={0};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		for(int i=1;i<=v;i++){
			cout<<i<<": ";
			for(int j=1;j<=v;j++){
				if(a[i][j]) {
					cout<<j<<' ';
				}
			}
			cout<<endl;
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}