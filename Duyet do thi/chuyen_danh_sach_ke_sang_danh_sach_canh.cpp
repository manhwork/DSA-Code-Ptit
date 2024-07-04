#include <bits/stdc++.h>
using namespace std;
/*

3
2 3
1 3
1 2

*/
int a[55][55]= {0};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	cin.ignore();
	for(int i=1; i<=n; i++) {
		string s;
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss >> x) {
			a[i][x]=1;
			a[x][i]=1;
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=i+1; j<=n; j++) {
			if(a[i][j] ) {
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	return 0;
}