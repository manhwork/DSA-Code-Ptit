#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int L[s+1]={0};
		L[0]=1;
		for(int i=0;i<n;i++){
			for(int j=s;j>=a[i];j--){
				if(L[j-a[i]]){
					L[j]=1;
				}
			}
		}
		if(L[s]) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}