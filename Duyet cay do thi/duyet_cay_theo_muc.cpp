#include <bits/stdc++.h>
using namespace std;
#define ll long long

//2
//2
//1 2 R 1 3 L
//4
//10 20 L 10 30 R 20 40 L 20 60 R


struct Node{
	int val;
	Node *left, *right;
	Node(int x){
		val = x;
		left = right = NULL;
	}
};

void makeNode(Node *root,int u,int v,char c){
	if(c == 'L') root->left= new Node(v);
	else root->right = new Node(v);
}

//Ham them 1 Node vao cay va them gia tri cua node
void insert(Node *root,int u,int v,char c){
	if(root == NULL) return ;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	else{
		insert(root->left,u,v,c);
		insert(root->right,u,v,c);
	} 
}

//Ham tinh chieu sau cua cay
int height(Node *root){
	if(root == NULL) return 0;
	return 1 + max(height(root->left),height(root->right));
}

// Ham kiem tra xem cay co cung muc khong
int check(Node *root,int level,int h){
	if(root == NULL) return 1;
	if(root->left == NULL and root->right == NULL and level < h) return 0;
	return check(root->left,level + 1,h) and check(root->right,level + 1,h);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		while(n--){
			int u,v; char c;
			cin>>u>>v>>c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		if(check(root,1,height(root))) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
