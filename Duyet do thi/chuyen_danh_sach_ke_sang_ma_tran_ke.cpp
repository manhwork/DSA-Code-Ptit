#include <bits/stdc++.h>
using namespace std;
/*
3
2 3
1 3
1 2
*/


int a[1001][1001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int v;cin>>v;
	cin.ignore();
	for(int i=1;i<=v;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x){
			a[i][x]=1;
		}
	}
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}