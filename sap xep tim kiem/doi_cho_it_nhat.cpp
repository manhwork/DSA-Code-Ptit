#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//4
//4 3 2 1
//5
//1 5 4 3 2

void solve (){
	int n;
	cin>>n;
	int a[n];
	for(int &i : a) cin>>i;
	int cnt=0;
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[k]){
				k=j;
			}
		}
		
		if(k!=i){
			cnt++;
			swap(a[k],a[i]);
		}
	}
	cout<<cnt<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}