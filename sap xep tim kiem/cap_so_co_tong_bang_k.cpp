#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//5 9 
//1 5 4 1 2
//3 2
//1 1 1

int n,s;
int a[105];
int b[105];
int k=2;
int cnt;

void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int sum=0;
			for(int l=1;l<=k;l++){
				sum+=b[a[l]];
			}
			if(sum==s) cnt++;
		}
		else ql(i+1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		cin>>n>>s;
		cnt=0;
		for(int i=1;i<=n;i++) cin>>b[i];
		ql(1);
		cout<<cnt<<endl;
	}
	return 0;
}