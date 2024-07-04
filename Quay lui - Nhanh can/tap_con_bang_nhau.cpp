#include<bits/stdc++.h>
using namespace std;
int n,h[100],c[100],xuoi[100],nguoc[100];
// xuoi la duong cheo xuoi huong cheo tu duoi len tren
// nguoc thi nguoc lai
int cnt;
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!h[j] and !c[i] and !xuoi[i+j-1] and !nguoc[i-j+n]){
			cnt++;
			h[j]=c[i]=xuoi[i+j-1]=nguoc[i-j+n]=1;
		}
		else ql(i+1);
		h[j]=c[i]=xuoi[i+j-1]=nguoc[i-j+n]=0;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cnt=0;
		cin>>n;
		ql(1);
		cout<<cnt<<endl;
	}
}