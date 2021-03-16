 //   ==> Diagonal traversal of binary tree <==
/*
   Diagonal traversal of binary tree can be easyily done by using hashing
   and pre-order traversal of binary tree

   --> each left move represents new diagonal 

   This problem can be solved in better time complexity by using queue
*/



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

void diagonal(node *root,map<int,vector<int>>&mp,int idx){
         if(root == NULL)
         	return;
       mp[idx].push_back(root->data);
       diagonal(root->left,mp,idx+1);
       diagonal(root->right,mp,idx);
}


void print_diagonal(node *root){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *temp = q.front();
		while(temp){
			cout<<temp->data<<" ";
			if(temp->left)
				q.push(temp->left);
			temp = temp->right;
		}
		q.pop();
	}
}
int main(){
	node *root = new node(10);
	root->left = new node(2);
	root->right = new node(11);
	root->left->left = new node(1);
	root->left->right = new node(5);
	root->left->right->left = new node(3);
	root->left->right->left->right = new node(4);
	root->left->right->right = new node(6);
 map<int,vector<int>>mp;

 //diagonal(root,mp,0);
print_diagonal(root);
 for(auto itr = mp.begin();itr!=mp.end();itr++){
 	for(int i=0;i<itr->second.size();i++){
 		cout<<itr->second[i]<<" ";
 	}
 }
return 0;
}