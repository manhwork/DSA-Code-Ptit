#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	string s;
	queue<int> qe;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			int n;cin>>n;
			qe.push(n);
		}
		else if(s=="POP"){
			if(!qe.empty()){
				qe.pop();
			}
		}
		else if(s=="PRINTFRONT"){
			if(qe.empty()) cout<<"NONE";
			else cout<<qe.front();
			cout<<endl;
		}
	}
}