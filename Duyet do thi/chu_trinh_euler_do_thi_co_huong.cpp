#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
int a[100][100], n, u, vs[100], s[10000], ce[10000];
int kt(int a[][], int n) {
	int v, top= 0, dem= 0;
	top++;
	s[top]= 1;
	dem++;
	while (top> 0) {
		int v= s[top], ok= 1;;
		for (int i= 1; i<= n; i++) 
			if ((a[v][i] == 1 || a[i][v]== 1) && vs[i]== 0) {
				top++;
				s[top]= i;
				vs[i] =1;
				dem++;
				ok= 0;
				break;
			}
		if (ok == 1) top--;
	}
	if (dem< n) return(0);
	int x= 0, y= 0;
	for (v= 1; v<= n; v++) {
		int d1= 0, d2= 0;
		for (int i= 1; i<= n; i++) {
			if (a[i][v] == 1) d1++;
			if (a[v][i] == 1) d2++;
		}
		if (d1!= d2) {
			if (abs(d1-d2) > 1) return(0);
			else {
				if (x> 0 && y> 0) return(0);
				else {
					if (d2> d1) x= v;
					else y= v;
				}
				if (x== 0 && y== 0) return(1);
				else {
					u= x;
					return(2);
				}
			}
		}
*/

//2
//6  10  
//1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4
//3 3
//1 2 2 3 1 3


int v,e;
vector<int> a[1001];
int datham[1001];

void dfs(int u){
	datham[u]=1;
	for(auto x : a[u]){
		if(!datham[x]){
			dfs(x);
		}
	}
}


int check(){
	memset(datham,0,sizeof(datham));
	dfs(1);
	for(int i=1;i<=v;i++) {
		if(!datham[i]) return 0;
	}
	
	for(int i=1;i<=v;i++){
		int d1=0,d2=0; // d1 và d2 là bán bậc ra và bán bậc vao
		
		for(auto x : a[i]) d1++;
		
		for(int j=1;j<=v;j++){
			for(auto x : a[j]){
				if(x==i) d2++; 
			}
		}
		
		if(d1 != d2) return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=0;i<=1001;i++) a[i].clear();
		while(e--){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
		}
		cout<<check()<<endl;
	}
	return 0;
}