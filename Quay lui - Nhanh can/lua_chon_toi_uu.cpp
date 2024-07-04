#include<bits/stdc++.h>
using namespace std;
class mang{
	public:
	int a,b;
};
int cmp(mang A,mang B){
	return A.b<B.b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		mang c[n+1];
		for(int i=1;i<=n;i++){
			cin>>c[i].a>>c[i].b;
		}
		sort(c+1,c+n+1,cmp);
		int tmp=c[1].b;
		int cnt=1;
		for(int i=2;i<=n;i++){
			if(c[i].a>tmp){
				cnt++;
				tmp=c[i].b;
			}
		}
		cout<<cnt<<endl;
	}
}