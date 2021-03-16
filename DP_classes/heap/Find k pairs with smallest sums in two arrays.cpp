// only valid for k<=n but same concept can be used for k>n
// But i have to stop hear because i have to eat MOMOS :)

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int val;
	int i;
	int j;
	Node(int a,int b,int n,int m){
		val = a+b;
		i=n;
		j=m;
	}
};
struct cmp
{
	bool operator()(Node *n1,Node *n2){
		return n1->val>n2->val;
	}
};
void solve(vector<int>v1,vector<int>v2,int k){
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
    Node *temp = new Node(v1[0],v2[0],0,0);
    priority_queue<Node*,vector<Node*>,cmp>pq;
    pq.push(temp);
    int i=1,j=1;
    int cnt=1;
    while(i<v1.size() && j<v2.size()){
          temp = pq.top();
          cout<<v1[temp->i]<<" "<<v2[temp->j]<<'\n';
          if(cnt==k)
          	return;
          pq.pop();
          	  Node *n1 = new Node(v1[temp->i+1],v2[temp->j],temp->i+1,temp->j);
          	    
         	Node *n2 = new Node(v1[temp->i],v2[temp->j+1],temp->i,temp->j+1);
          pq.push(n2);
           pq.push(n1);
          cnt++;
    }
}
int main(){
	int n,m;
	cin>>n>>m;
	std::vector<int> v1;
	std::vector<int> v2;
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v1.push_back(val);
	}
	for(int i=0;i<n;i++){
		int val;cin>>val;
		v2.push_back(val);
	}
	int k;cin>>k;
	solve(v1,v2,k);
return 0;
}