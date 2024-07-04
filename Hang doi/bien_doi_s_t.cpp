#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		int cnt=0;
		queue<int> q;
		q.push(a);
		while(a != b){
			if(a<b){
				if( abs(a*2 - b) <= abs((a-1)*2-b) ){
					a*=2;
				}
				else if( abs(a*2 - b) > abs((a-1)*2-b) ){
					a--;
				}
			}
			else if( a > b) {
				a--;
			}
			cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}