#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int ok;
int sum;
void ql(int i,int s){
	if(i==n or s==sum/2 or ok){
		if(s==sum/2) ok=1;
		return ;
	}
	if(a[i]+s<=sum/2){
		ql(i+1,s+a[i]);
	}
	ql(i+1,s);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=0;
		sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		ql(1,0);
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}