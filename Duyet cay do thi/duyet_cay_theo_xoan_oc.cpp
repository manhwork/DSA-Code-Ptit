#include<bits/stdc++.h>
using namespace std;
#define null NULL
struct Node{
	int val;
	Node *l,*r;
	Node(int n){
		val = n;
		l=r=null;
	}
};

void makeNode(Node *root,int u,int v,char c){
	if(c == 'L') root->l = new Node(v);
	else root->r = new Node(v);
}

void insert(Node *root,int u,int v,char c){
	if(root == null ) return ; 
	if(root->val == u ){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}

int height(Node *root){
	if(root == null) return 0;
	return 1 + max(height(root->l),height(root->r));
}

void xoanoc(Node *root){
	vector<int> a[1005];
	queue<pair<Node*,int>> q;
	int h=0;
	q.push({root,0});
	while(!q.empty()){
		Node *top = q.front().first;
		int lev = q.front().second;
		q.pop();
		h = max(h,lev);
		a[lev].push_back(top->val);
		if(top->l != null) q.push({top->l,lev+1});
		if(top->r != null) q.push({top->r,lev+1});
	}
	
	for(int i=0;i<=h;i++){
		if(i%2==0){
			reverse(a[i].begin(),a[i].end());
		}
		for(auto x : a[i]){
			cout<<x<<" ";
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = null;
		while(n--){
			int u,v;char c;
			cin>>u>>v>>c;
			if(root == null){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		xoanoc(root);
		cout<<endl;
	}
}