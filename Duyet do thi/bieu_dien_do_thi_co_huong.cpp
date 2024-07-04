#include <bits/stdc++.h>
using namespace std;

/*

1
6  9
1  2
2  5
3  1
3  2
3  5
4  3
5  4
5  6
6  4

*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		int v,e;
		cin>>v>>e;
		int a[v+1][v+1]= {0};
		for(int i=1; i<=e; i++) {
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
		}
		for(int i=1; i<=v; i++) {
			cout<<i<<": ";
			for(int j=1; j<=v; j++) {
				if(a[i][j]) {
					cout<<j<<' ';
				}
			}
			cout<<endl;
		}
	}
	return 0;
}