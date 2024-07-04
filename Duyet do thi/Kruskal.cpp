#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct canh{
	int x,y,z;
};

int v,e;
int parent[1005];
vector<canh> a;

void make_set(){
	for(int i=1;i<=v;i++) parent[i]=i; 
}

int find(int u){
	if(parent[u]==u) return u;
	else return parent[u] = find(parent[u]);
}

int Union(int A,int B){
	A = find(A);
	B = find(B);
	if(A==B) return 0;
	if(A<B) parent[B]=A;
	else parent[A]=B;
	return 1;
}

int cmp(canh a,canh b){
	return a.z<b.z;
}

void Kruskal(){
	sort(a.begin(),a.end(),cmp);
	vector<canh> tree;
	int ans = 0; // đếm độ dài đường đi 
	for(canh X : a){
		if(tree.size() == v-1) break;
		if(Union(X.x,X.y)){ //Nếu 2 đỉnh này mà cùng thuộc 1 đồ thị tức là có chu trình 
			ans+=X.z;
			tree.push_back(X);
		}
	}
	if(tree.size()<v-1) {
	// tức đồ thị ko liên thông 
	}
	else {
		cout<<ans<<endl;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;;
	while(t--){
		cin>>v>>e;
		memset(parent,0,sizeof(parent));
		a.clear();
		while(e--){
			int a1,a2,a3;
			cin>>a1>>a2>>a3;
			a.push_back({a1,a2,a3});
		}
		make_set();
		Kruskal();
	}
	return 0;
}