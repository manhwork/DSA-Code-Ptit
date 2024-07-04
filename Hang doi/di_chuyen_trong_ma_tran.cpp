#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,m;
int datham[1005][1005];
void bfs(int i,int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		int top1 = q.front().first ; 
		int top2 = q.front().second;
		datham[top1][top2] = 1;
		int j1 = top2 + a[top1][top2];
		int i1 = top1 + a[top1][top2];
		if(i1>=1 and i1<=n){
			
		} 
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	return 0;
}