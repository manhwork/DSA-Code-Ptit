#include <bits/stdc++.h>
using namespace std;
#define ll long long


//3
//4
//4 5 2 25
//3
//2 2 2
//4
//4 4 5 5

void solve(){
	int n;
	cin>>n;
	int a[n+1],gre[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		// Xóa phần tử nhỏ hơn a[i] trong stack	
		while(!st.empty() and st.top() <= a[i]) st.pop();
		if(st.empty()) gre[i]=-1;
		else gre[i]=st.top();
		st.push(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<gre[i]<<" ";
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}