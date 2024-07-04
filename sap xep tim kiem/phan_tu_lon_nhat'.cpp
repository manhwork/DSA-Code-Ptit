#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//5 3
//10 7 9 12 6
//6 2
//9 7 12 8 6 5

void solve(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x : a){
		cin>>x;
	}
	sort(a,a+n);
	for(int i=n-1;i>=n-k;i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}