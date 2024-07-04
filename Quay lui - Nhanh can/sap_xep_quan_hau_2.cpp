#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n=8,h[100],c[100],xuoi[100],nguoc[100];
int a[1000][1000];
int b[1000];
int res;
ll tong(int a[],int n) {
	ll t=0;
	for(int i=1; i<=n; i++) {
		t+=a[i];
	}
	return t;
}
void ql(int i) {
	for(int j=1; j<=n; j++) {
		if(!h[j] and !c[j] and !xuoi[i+j-1] and !nguoc[i-j+n]) {
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=1;
			b[i]=a[i][j];
			if(i==n) {
				int sum=tong(b,n);
				res=max(res,sum);
			} else ql(i+1);
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=0;
		}
	}
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		res=INT_MIN;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin>>a[i][j];
			}
		}
		ql(1);
		cout<<res<<endl;
	}

}