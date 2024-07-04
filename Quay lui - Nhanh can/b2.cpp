#include<bits/stdc++.h>
using namespace std;
int n;
string S;
vector<string> v;
vector<string> v1;
int a[10000];
int used[1000]= {0};
void show(){
	for(int i=0;i<v1.size();i++){
		cout<<v1[a[i]]<<" ";
	}
	cout<<S<<endl;
}
void ql(int i) {
	for(int j=0; j<v1.size(); j++) {
		if(!used[j]) {
			used[j]=1;
			a[i]=j;
			if(i==v1.size()-1){
				show();
			}
			else ql(i+1);
			used[j]=0;
		}
	}
}
int main() {
	cin>>n;
	scanf("\n");
	for(int i=0; i<n; i++) {
		string s;
		cin>>s;
		v.push_back(s);
	}
	cin>>S;
	for(int i=0; i<n; i++) {
		if(v[i]!=S) v1.push_back(v[i]);
	}
	sort(v1.begin(),v1.end());
	ql(0);
}