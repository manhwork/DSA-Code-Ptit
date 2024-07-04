#include <bits/stdc++.h>
using namespace std;
#define ll long long


//2
//2
//1 2 R 1 3 L
//4
//10 20 L 10 30 R 20 40 L 20 60 R



struct node {
	int val ;
	node *left,*right;
	node(int x) {
		val = x;
		left = right = NULL;
	}
};

void makenode(node *root,int u,int v,char c) {
	if(c== 'L' ) root->left = new node(v);
	else root->right = new node(v);
}

void insert(node *root,int u,int v,char c) {
	if(root == NULL) return ;
	if(root->val == u) {
		makenode(root,u,v,c);
	}
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}


void level_oder(node *root) {
	queue<node*> q;
	q.push(root);
	while(!q.empty()) {
		node *tmp = q.front();
		q.pop();
		cout<<tmp->val<<" ";
		if(tmp->left != NULL) q.push(tmp->left);
		if(tmp->right != NULL) q.push(tmp->right);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		node *root = NULL;
		while(n--) {
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root == NULL) {
				root = new node(u);
				makenode(root,u,v,c);
			} else insert(root,u,v,c);
		}
		level_oder(root);
		cout<<endl;
	}
}