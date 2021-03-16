#include<bits/stdc++.h>
using namespace std;
struct node{
	int freq;
	char ch;
	node *left,*right;
	node(int val){
		freq = val;
		left = right = NULL;
	}
	node(int val,char c){
		freq = val;
		ch = c;
		left = right = NULL;
	}
};

struct cmp
{
	bool operator()(node *n1,node *n2){
		return n1->freq > n2->freq;
	}
};

void print(node*root,string s){
    if(root->left==NULL && root->right==NULL){
        cout<<s<<" ";
        return;
    }
    print(root->left,s+"0");
    print(root->right,s+"1");
}

int main(){
  string str;cin>>str;
  unordered_map<char,int>umap;
  stringstream ss(str);
  char c;
  while(ss>>c)
  umap[c]++;

  priority_queue<node*,vector<node*>,cmp>pq;

  for(auto x:umap){
  	node *temp = new node(x.second,x.first);
  	pq.push(temp);
  }
  /*while(!pq.empty()){
  	node *temp = pq.top();
  	pq.pop();
  	cout<<temp->ch<<" "<<temp->freq<<'\n';
  }*/
while(pq.size()>1){
	node *l = pq.top();
	pq.pop();
	node * r = pq.top();
	pq.pop();
	int val = l->freq+r->freq;
	node * temp = new node(val);
	temp->left = l;
	temp->right = r;
	pq.push(temp);
}
node *temp = pq.top();
//cout<<temp->freq<<" "<<temp->left->freq<<" "<<temp->right->freq<<'\n';
string s="";
print(temp,s);
//cout<<temp->right->right->ch;
return 0;
}