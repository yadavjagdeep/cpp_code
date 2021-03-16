/*
  Sometimes we ecounter cases where data cannot be strored in
  primitive data types, insted there are collection of data needed together
   
       In such situation we use structure or class 
   But if we are needed to store then in priority queue then it will throw error
   because it will have no way to arrange them.

   In that case we are neede to overlode oprator in other words we are needed to
   explicitly define way of arrangement


    => To achive our goal we can use either way both is implimented below <=

*/


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
};

struct cmp
{
	bool operator()(node *n1,node *n2){
		return n1->freq > n2->freq;
	}
};
/*
class node{
public:
	int freq;
	char ch;
	node *left,*right;
	node(int val){
		freq = val;
		left = right = NULL;
	}
};

bool operator<(const node &n1,const node &n2){
	
	return n1.freq < n2.freq;
}*/

int main(){
 int n;cin>>n;
 priority_queue<node*,vector<node*>,cmp>pq;
 //priority_queue<node*>pq;
 for(int i=0;i<n;i++){
 	int freq;cin>>freq;
 	node *temp = new node(freq);
 	pq.push(temp);
 }

while(!pq.empty()){
	node *temp = pq.top();
	cout<<temp->freq<<'\n';
	pq.pop();
}
return 0;
}