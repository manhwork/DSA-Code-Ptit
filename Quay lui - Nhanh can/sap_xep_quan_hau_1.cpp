#include<bits/stdc++.h>
using namespace std;
int n,h[100],c[100],xuoi[100],nguoc[100];
// xuoi la duong cheo xuoi huong cheo tu duoi len tren
// nguoc thi nguoc lai
int cnt;
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!h[j] && !c[j] && !xuoi[i+j-1] && !nguoc[i-j+n]){
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=1;
			if(i==n) cnt++;
			else ql(i+1);
			h[j]=c[j]=xuoi[i+j-1]=nguoc[i-j+n]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cnt=0;
		ql(1);
		
		cout<<cnt<<endl;
	}
}