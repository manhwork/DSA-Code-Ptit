#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		ll sum=0;
		ll sum2=0;
		for(int i=0;i<n;i++){
			int tmp[n];
			for(int j=0;j<n;j++){
				tmp[j]=a[i][j];
			}
			sort(tmp,tmp+n);
			sum+=tmp[n-1];
		}
		for(int i=0;i<n;i++){
			int Tmp[n];
			for(int j=0;j<n;j++){
				Tmp[j]=a[j][i];
			}
			sort(Tmp,Tmp+n);
			sum2+=Tmp[n-1];
		}
		cout<<max(sum,sum2)<<endl;
	}
}