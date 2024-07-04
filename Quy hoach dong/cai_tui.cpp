#include<bits/stdc++.h>
using namespace std;
struct data {
	int a,b;
};
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,M;
		cin>>n>>M;
		data dovat[n];
		int dp[n+5][n+5]= {};
		for(int i=1; i<=n; i++) {
			cin>>dovat[i].b;
		}
		for(int i=1; i<=n; i++) {
			cin>>dovat[i].a;
		}
		for(int i=1; i<=n; i++) {
			// duyet tu do vat thu 1 den do vat thu n
			for(int j=1; j<=M; j++) {
				// duyet cai tui co can nang bang 1 den can nang = M
				dp[i][j]=dp[i-1][j];
				if(j>=dovat[i].b) {
					dp[i][j]=max(dp[i][j],dp[i-1][j-dovat[i].b]+dovat[i].a);
				}
			}
		}
		int res=-1;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=M; j++) {
				res=max(res,dp[i][j]);
			}
		}
		cout<<res<<endl;
	}

}