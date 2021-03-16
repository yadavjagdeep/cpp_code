#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void maxhepify(int i,vector<int> &a){
  int n = a.size();
  if(i>n/2-1)
  return;
  cout<<"yes"<<endl;
  int l = ((2*i)+1);
  int r = ((2*i)+2);
  int max = i;
if(l<n && a[l]>a[max])
max  =l;
if(r<n && a[r]>a[max])
max = r;
if(max != i)
{
  swap(a[max],a[i]);
  maxhepify(max,a);
}
}
int main(){
  int n;cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    v.push_back(val);
  }
  for(int i=n/2-1;i>=0;i--)
  maxhepify(i,v);
  for(auto x:v)
  cout<<x<<" ";
return 0;
}
