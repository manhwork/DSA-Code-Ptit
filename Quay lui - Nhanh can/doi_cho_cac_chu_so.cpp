#include<bits/stdc++.h>
using namespace std;
int k;
string s;
int cnt=0;
void ql(int i){
	if(cnt==k or i<s.size()){
		return ;
	}
	int index=-1;
	for(int j=i;j<s.size();j++){
		if(s[i]<s[j]){
			index=j;
		}
	}
	if(index!=-1){
		cnt++;
		swap(s[i],s[index]);
	} 
	ql(i+1);
}
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		cnt=0;
		cin>>k;
		cin>>s;
		ql(0);
		cout<<s<<endl;
	}
}