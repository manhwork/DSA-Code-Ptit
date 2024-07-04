#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
ĐIỀU KIỆN ĐỂ ĐỒ THỊ CÓ CHU TRÌNH, ĐƯỜNG ĐI EULER

ĐÔ THỊ VÔ HƯỚNG

Đồ thị vô hướng có chu trình Euler nếu :

-Các đình có bậc khác 0 của đồ thị liên thông với nhau

- Tất cả các đỉnh của đồ thị đều có bậc chẵn

Đồ thị vô hưởng có đường đi Euler nếu :

-Các đỉnh có bậc khác 0 của đồ thị liên thông với nhau

-Đô thị có 0 hoặc 2 đình có bậc lẻ, trong trường hợp có 2 đình bậc lè thì đường đi sẽ bắt đầu từ đình bậc lê thứ 1 và kết thúc ở đình bậc lê thứ 2

ĐỒ THỊ CÓ HƯỚNG

Đồ thị có hướng có chu trình Euler nếu

-Các đỉnh có bậc khác 0 của đồ thị thuộc cùng 1 thành phần liên thông

-Mọi đỉnh thuộc đồ thị đều có bản bắc ra bằng bán bậc vào

Đồ thị có hướng có đường đi Euler nếu

-Các đình có bậc khác 0 của đồ thị thuộc cùng 1 thành phần liên thông

- Tồn tại 2 đình u, v må deg+(u) - deg-(u) = 1 và deg-(v)-deg+(v) = 1, mọi đình còn lại đều có bán bậc ra bằng bán bậc vào. Khi đó đường đi bắt đầu từ đĩnh u và kết thúc ở đỉnh v


*/

/*
int a[100][100], n, u, vs[100], e[100]. s[10000], ce[10000];
int kt(int a[][], int n) {
	int v;
	for (v= 1; v<= n; v++) {
		vs[v]= 0;
		e[v]= 0;
	}
	DfsDequy(1);
	int ok= 1;
	for (v= 1; v<= n; v++) if (vs[v] == 0) {
			ok= 0;
			break;
		}
	if (ok == 0) return(0);
	int bl= 0;
	for (v= 1; v<= n; v++) {
		int deg= 0;
		for (int i= 1; i<= n; i++) if (a[v][i] == 1) deg++;
		if (deg%2 == 1) {
			bl++;
			if (bl> 2) return(0);
			if (bl == 1) {
				u= v;
				ok= 2;
			}
			return(ok);
		}
*/

//2
//6 10  
//1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6
//6 9  
//1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6



int v,e;
vector<int> a[1001];
int datham[1001];

void dfs(int u){
	datham[u]=1;
	for(int x : a[u]){
		if(!datham[x]){
			dfs(x);
		}
	}
}

int check(){
	memset(datham,0,sizeof(datham));
	dfs(1);
	for(int i=1;i<=v;i++) { // kiểm tra đồ thi liên thông ?
		if(!datham[i]){
			return 0;
		}
	}
	int dem=0; // đếm số đỉnh có bậc lẻ
	for(int i=1;i<=v;i++){
		int deg=0;
		for(auto x : a[i]){
			deg++;
		}
		if(deg % 2 != 0) dem++;
	}
	if(dem==0) return 2;
	else if(dem==2) return 1;
	else return 0;
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
			a[y].push_back(x);
		}
		cout<<check()<<endl;
	}
	return 0;
}
