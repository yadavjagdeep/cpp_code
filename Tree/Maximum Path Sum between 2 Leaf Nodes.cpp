#include<bits/stdc++.h>
using namespace std;
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
class solution{
public:
	int mx = -10000;
	int count_max(node *root){
	    if(root == NULL)
	    return -10000;
		if(root->left==NULL && root->right == NULL)
			return root->data;
		int l = count_max(root->left);
		int r = count_max(root->right);

		mx = max(mx,(l+r+root->data));
		return root->data + max(l,r);
	}
};
int main(){
   node *root = new node(3);
   root->left = new node(4);
   root->right = new node(5);
   root->left->left = new node(-10);
   root->left->right = new node(4); 
   
   solution obj;
   obj.count_max(root);
   cout<<obj.mx<<'\n';
  return 0;
}