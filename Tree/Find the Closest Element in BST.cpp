#include<bits/stdc++.h>
using namespace std;
int ans=10000;
class node{
public:
	int data;
	node *left;
	node *right;
	node(int val){
		data = val;
		left = right = NULL;
	}
};
node *insert(node *root,int val){
	if(root == NULL)
		return new node(val);
	else if(val<=root->data)
		root->left = insert(root->left,val);
	else
		root->right = insert(root->right,val);

return root;
}
void solve(node *root,int k){
	if(root == NULL)
		return;
	if(root->data==k){
		ans=0;
		return;
	}
	ans = min(ans,(abs(root->data-k)));
	if(root->data>k)
		return solve(root->left,k);
    
    return solve(root->right,k);
}


int main(){
	int n;cin>>n;
	node *root = NULL;
	for(int i=0;i<n;i++){
		int val;cin>>val;
        root = insert(root,val);
	}
	int k;cin>>k;
	solve(root,k);
	cout<<ans<<'\n';
return 0;
}