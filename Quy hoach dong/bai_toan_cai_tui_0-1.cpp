#include<bits/stdc++.h>
using namespace std;
struct mang {
	int a,b;
};
int f[1005][1005]= {0};
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,v;
		cin>>n>>v;
		mang mang[n+1];
		for(int i=1; i<=n; i++) cin>>mang[i].a;
		for(int i=1; i<=n; i++) cin>>mang[i].b;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=v; j++) {
				f[i][j]=f[i-1][j];
				if(j>=mang[i].a) f[i][j]=max(f[i][j],f[i-1][j-mang[i].a] + mang[i].b);
			}
		}
		cout<<f[n][v]<<endl;
		memset(f,0,sizeof(f));
	}
}