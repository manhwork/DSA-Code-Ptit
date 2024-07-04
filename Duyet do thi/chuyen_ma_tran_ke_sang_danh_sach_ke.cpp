#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];

//3
//0 1 1
//1 0 1
//1 1 0

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i=0;i<=1001;i++) a[i].clear();
	int v;cin>>v;
	int b[v+1][v+1];
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++) {
			cin>>b[i][j];
			if(b[i][j]){
				a[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=v;i++){
		for(auto x : a[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}