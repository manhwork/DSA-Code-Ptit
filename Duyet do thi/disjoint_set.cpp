#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[1001];

int find(int u){
	if(u == parent[u]) return u;
	else return find(parent[u]);
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return false; // thuoc cung 1 tap hop
	if(a < b) parent[b] = a;
	else parent[a] = b;
	return true;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		bool flag = false;
		cin >> n >> m;
		for(int i = 1; i <= n; i++) parent[i] = i;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			if(Union(x, y) == false){ // 2 dinh thuoc cung 1 TPLT
				flag = true; // co chu trinh
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
}