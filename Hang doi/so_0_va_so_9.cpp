#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t ;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("9");
		ll tmp= stoll(q.front());
		while(tmp % n != 0){
			string s=q.front();
			q.pop();
			q.push(s+ "0");
			q.push(s + "9");
			tmp= stoll(q.front());
		}
		cout<<tmp<<endl;
	}	
	return 0;
}