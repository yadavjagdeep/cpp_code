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

void postorder(node *root){
	if(root == NULL)
		return;
	std::vector<int> v;
	stack<node*>s;
	s.push(root);
	while(!s.empty()){
		node *temp = s.top();
		s.pop();
		v.push_back(temp->data);
		if(temp->left)
			s.push(temp->left);
		if(temp->right)
			s.push(temp->right);
	}
	reverse(v.begin(),v.end());
	for(auto x:v)
		cout<<x<<" ";
}

int main(){
	node *root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

     postorder(root);
  return 0;
}