#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;cin>>t;
//	scanf("\n");
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("1");
		long long number = stoll (q.front());
		while( number % n != 0 ){
			string s;
			s = q.front();
//			cout<<s<<endl;
			q.pop();
			q.push( s +"0");
			q.push( s + "1" );
			number = stoll (q.front());
		}
		cout<< number << endl;
	}	
	return 0;
}