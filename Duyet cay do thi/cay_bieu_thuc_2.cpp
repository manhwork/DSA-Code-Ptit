#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//7
//+ * - 5 4 100 20
//3
//- 4 7

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<string> v;
		queue<ll> q;
		cin>>n;
		while(n--){
			string s;
			cin>>s;
			v.push_back(s);
		}
		reverse(v.begin(),v.end());
		
		for(auto x : v){
			if(x=="+" or x=="-" or x=="*" or x=="/"  ){
				ll op1 = q.front();q.pop();
				ll op2 = q.front();q.pop();
				ll TMP;
				if(x=="+"	) TMP = op2 + op1;
				else if(x=="-"	) TMP = op2 - op1;
				else if(x=="*"	) TMP = op2 * op1;
				else if(x=="/") TMP = op2 / op1;
				q.push(TMP);
			}
			else {
				ll tmp = stoll(x);
				q.push(tmp); 
			}
		}
		cout<<q.front()<<endl;
	}
	return 0;
}