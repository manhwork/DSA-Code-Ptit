#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define null NULL


struct Node{
	int val;
	Node *l,*r;
	Node(int n){
		val = n;
		l = r = null;
	}
};

void  makeNode(Node *root,int  u,int v,char c){
	if(c== 'L') root->l = new Node(v);
	else root->r = new Node(v);
}

void insert(Node *root,int u,int v,char c){
	if(root == null) return ;
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}

int check(Node *root){
	if(root==null) return 1;
	if( (root->l == null and root->r != null) or (root->l != null and root->r == null) )
		return 0;
	return check(root->l) and check(root->r);	
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		Node *root=null;
		while(n--){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root == null){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		if(check(root)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}