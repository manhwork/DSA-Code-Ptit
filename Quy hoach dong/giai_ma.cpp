#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	scanf("\n");
	while(t--) {
		string s;
		cin>>s;
		vector<int> v(s.size()+5,0);
		v[0]=v[1]=1;
		for(int i=2; i<=s.size(); i++) {
			int first = stoi(s.substr(i-1,1));
			int second = stoi(s.substr(i-1,2));
			if(first>=1 and first<=9){
				v[i]+=v[i-1];
			}
			if(second >=10 and second <=26){
				v[i]+=v[i-2];
			}
		}
		cout<<v[s.size()]<<endl;
	}
}