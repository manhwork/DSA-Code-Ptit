#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+5]={0};
		a[0] = a[1] = 1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=min(i,k);j++){
				a[i]+=a[i-j];
				a[i] %= mod;
			}
		}
		cout<<a[n]<<endl;
	}
}