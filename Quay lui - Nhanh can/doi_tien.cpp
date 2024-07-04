#include<bits/stdc++.h>
using namespace std;
int n,s;
int a[1000];
int b[1000];
int cnt=0;
int ok=0;
int cmp(int a,int b){
	return a>b;
}
int sum=0;
void ql (int i,int pos){
	for(int j=pos;j<=n;j++){
		if(a[j]+sum<=s){
			sum+=a[j];
			b[i]=a[j];
			if(sum==s){
				ok=1;
				cout<<i<<endl;
				break;
			}
			else ql(i+1,j+1);
			sum-=a[j];
		}
	}
}


int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	ql(1,1);
	if(!ok) cout<<"-1";
}