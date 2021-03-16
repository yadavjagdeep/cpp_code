/*
The idea is to short the profit in decresing order of profit
schedule the job with max profit as late as possible and mark that slot filled
*/
#include<bits/stdc++.h>
using namespace std;
struct schedule{
  int id;
  int dead;
  int profit;
};
bool cmp(struct schedule s1,struct schedule s2){
  return s1.profit>s2.profit;
}
vector<int> solve(vector<schedule> v,int n){
  sort(v.begin(),v.end(),cmp);
  std::vector<int>ans;
  bool check[n];
  for(int i=0;i<n;i++)
  check[i]=false;

  for(int i=0;i<n;i++){
    for(int j = min(n,v[i].dead-1);j>=0;j--){
      if(check[j]==false){
        check[j]=true;
        ans.push_back(v[i].profit);
        break;
      }
    }
  }
return ans;
}
int main(){
  int n;cin>>n;
  std::vector<schedule> v;
  for(int i=0;i<n;i++){
    int x,y,z;
    cin>>x>>y>>z;
    v.push_back({x,y,z});
  }
  std::vector<int>ans;
  ans = solve(v,n);
  int sum=0;
  for(auto x:ans)
  sum+=x;

  cout<<ans.size()<<" "<<sum<<'\n';
return 0;
}
