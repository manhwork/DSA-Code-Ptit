#include<bits/stdc++.h>
using namespace std;
int n,a,b,k;
int A[10000];
int B[10000]={};
int sum=0;
int cnt=0;
void ql(int i,int pos){
	for(int j=1;j<=n;j++){
		if(i>n) return ;
		sum+=A[j];
		if(sum<a || sum> b ){
			cnt++;
		}
		ql(i+1,j);
		sum-=A[j];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
		ql(1,1);
		cout<<cnt<<endl;
	}
}