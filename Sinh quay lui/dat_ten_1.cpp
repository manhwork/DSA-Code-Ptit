#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000];
set<string> se;
vector<string> v;
void ql(int i,int pos)
{
	for(int j=pos;j<=n;j++) 
	{
		a[i]=j;
		if(i==k)
		{
			for(int l=1;l<=k;l++)
			{
				cout<<v[a[i]-1]<<' ';
			}
			cout<<endl;
		}
		else ql(i+1,j+1);
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		se.insert(s);
	}
	for(auto x : se)
	{
		v.push_back(x);
		cout<<x<<' ';
	}
//	for(auto x : v)
//	{
//		cout<<x<<' ';
//	}
	n=v.size();
	ql(1,1);
}