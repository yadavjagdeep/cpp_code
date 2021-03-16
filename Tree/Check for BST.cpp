//  ==> Check if a Binary tree is Binary search tree <==
/*
     --> To check if binary tree a BST we can just take INORDER traversal 
         and check non-decreasing order

         TC: O(n) ans SC: O(n);

     --> Another approch is to check recursiveily 
          -> All the elements in the left subtree should be less than root
          -> All the elements in right subtree should be greater than root
*/

#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node *left,*right;
	node(int data){
		this->data = data;
		left = right = NULL;
	}
};
class solution{
public:
	std::vector<int>v;
	void inorder(node *root){
	if(root ==  NULL)
		return;
	inorder(root->left);
	//cout<<root->data<<" ";
	v.push_back(root->data);
	inorder(root->right);
}
bool check(){
	for(int i=1;i<v.size();i++){
		if(v[i]<=v[i-1])
			return false;
	}
return true;
}
 bool checkBST(node *root,int min,int max){
 	if(root==NULL)
 		return true;
 	if(root->data < min || root->data > max)
 		return false;

 	return (checkBST(root->left,min,root->data-1) && checkBST(root->right,root->data+1,max));
 }
};
int main(){
	node *root = new node(8);
	root->left = new node(3);
	root->right = new node(10);
	root->left->left = new node(1);
	root->left->right = new node(6);
	root->left->right->left = new node(4);
	root->left->right->right = new node(7);
	root->right->right = new node(14);
	root->right->right->left = new node(13);
solution obj;
//cout<<obj.checkBST(root,INT_MIN,INT_MAX)<<'\n';
obj.inorder(root);
cout<<obj.check()<<'\n';
return 0;
}