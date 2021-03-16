#include<bits/stdc++.h>
using namespace std;
void spiral(int n,int m,vector<vector<int>>&v){
  int t=0,l=0,r=m-1,b=n-1;
  while(t<b && l<r){
    for(int i=l;i<=r;i++){
      cout<<v[t][i]<<" ";
    }
    cout<<endl;
    t++;
    for(int i=t;i<=b;i++){
      cout<<v[i][r]<<" ";
    }
    cout<<endl;
    r--;
    for(int i=r;i>=l;i--){
      cout<<v[b][i]<<" ";
    }
    cout<<endl;
    b--;
    for(int i=b;i>=t;i--){
      cout<<v[i][l]<<" ";
    }
    l++;
    cout<<endl;
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  /*****matrix input******************/
  vector<vector<int>>v;
  for(int i=0;i<n;i++){
    std::vector<int>row;
    for(int j=0;j<m;j++){
      int val;cin>>val;
      row.push_back(val);
    }
    v.push_back(row);
  }
  /*************************************************/
  spiral(n,m,v);
return 0;
}
