#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>> insert_2d(int n,int m){
   vector<vector<int>> v;
   for(int i=0;i<n;i++){
    std::vector<int>row;
    for(int j=0;j<m;j++){
      int val;cin>>val;
      row.push_back(val);
    }
    v.push_back(row);
   }
  return v;
}

pair<int,int> search(vector<vector<int>> v,int k){
int n = v[0].size();
int i=0,j=n-1;
pair<int,int>p;
while(i<n && j>=0){
  if(v[i][j]==k){
    p = make_pair(i,j);
    return p;
  }else if(v[i][j]>k)
  j--;
  else
    i++;
}
return p;
}

int main(){
   ios_base::sync_with_stdio(0);
    cin.tie();
    int n;cin>>n;
     vector<vector<int>> v = insert_2d(n,n);
     int k;cin>>k;
     pair<int,int>p = search(v,k);
     cout<<p.first<<" "<<p.second<<'\n';
return 0;
}