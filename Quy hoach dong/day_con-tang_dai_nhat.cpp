#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin>>v[i];
	vector<int> f(n,1);
//	f[i] là do dai day con tang dai nhat ket thuc o chi so i
//	f[i]=max(f[i],f[j]+1) : a[i]>a[j]
	for(int i=0; i<n; i++) {
//		f[i]=f[j]
//		duyet qua tung phan tu dung truoc i
		for(int j=0; j<i; j++) {
			if(v[i]>v[j]){
				f[i]=max(f[i],f[j]+1);
			}
		}
	}
	cout<< *max_element(f.begin(),f.end())<<endl;
}