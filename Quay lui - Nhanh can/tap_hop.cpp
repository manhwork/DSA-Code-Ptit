#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[100]={0};
int cnt;
void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int sum=0;
			for(int l=1;l<=k;l++){
				sum+=a[l];
			}
			if(sum==s){
				cnt++;
			}
		}
		else ql(i+1);
	}
}
int main(){
	while(1){
		cin>>n>>k>>s;
		if(n+k+s==0){
			break;
		}
		cnt=0;
		ql(1);
		cout<<cnt<<endl;
	}
}

