#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL

// cây hoàn h?o là cây mà các lá có cùng m?c và node trung gian có 1 node trái và 1 node ph?i

//3
//6
//10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
//2
//18 15 L 18 30 R
//5
//1 2 L 2 4 R 1 3 R 3 5 L 3 6 R

struct node {
	int val;
	node *left,*right;
	node(int x) {
		val = x;
		left=right=null;
	}
};

void makeNode(node *root,int u,int v,char c) {
	if(c== 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insert(node *root,int u,int v,char c) {
	if(root == null) return ;
	if(root->val == u) {
		makeNode(root,u,v,c);
	}
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

int height(node *root) {
	if(root == null) return 0;
	return 1 + max(height(root->left),height(root->right));
}

int check1(node *root,int level,int h) {
	if(root == null) return 1;
	if(root->left == null and root->right == null and level < h ) return 0;
	return check1(root->left,level + 1,h) and check1(root->right,level + 1,h);
}

int check2(node *root) {
	if(root == null ) return 1;
	if(	(root->left == null and root->right != null) or (root->left != null and root->right== null)	)
		return 0;
	return check2(root->left) and check2(root->right);
}

void solve() {
	int n;
	cin>>n;
	node *root = null;
	while(n--) {
		int u,v;
		char c;
		cin>>u>>v>>c;
		if(root == null) {
			root = new node(u);
			makeNode(root,u,v,c);
		} else insert(root,u,v,c);
	}
	if(check1(root,1,height(root)) and check2(root)) cout<<"YES";
	else cout<<"NO";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		solve();
		cout<<endl;
	}
}