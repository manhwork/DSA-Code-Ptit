#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,h[100],c[100],xuoi[100],nguoc[100];
int cnt=0;

void solve(int i){
	for(int j=1;j<=n;j++){
		if(!h[j] && !c[j] && !xuoi[i+j-1] && !nguoc[i-j+n]){
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=1;
			if(i==n) cnt++;
			else solve(i+1);
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=0;
		}
	}
}
//void ql(int i){
//		for(int j=1;j<=n;j++){
//			if(!h[j] && !c[j] && !xuoi[i+j-1] && !nguoc[i-j+n]){
//				h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=1;
//				if(i==n) cnt++;
//				else ql(i+1);
//				h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=0;
//			}
//		}
//}

int main(){
	int t=1;
	while(t--){
		cin>>n;
		solve(1);
		cout<<cnt<<endl;
	}
}
