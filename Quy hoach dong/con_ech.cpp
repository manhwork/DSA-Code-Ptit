#include<bits/stdc++.h>
using namespace std;
long long a[100] = {0};
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		memset(a,0,sizeof(a));
		a[0]=1;
		a[1]=1;
		a[2]=2;
		for(int i=3; i<=n; i++) {
			for(int j=1; j<=3; j++) {
				a[i]+=a[i-j];
			}
		}
		cout<<a[n]<<endl;
	}
}