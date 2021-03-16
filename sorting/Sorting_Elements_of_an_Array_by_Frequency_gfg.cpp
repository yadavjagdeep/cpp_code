#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cstdbool>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){

if(p1.second == p2.second)
return p1.first<p2.first;

  return p1.second>p2.second;
}
int main(){
  int t;cin>>t;
  while (t--) {
    int n;cin>>n;
    std::vector<int> v;
    std::vector<int> freq(61,0);
    for(int i=0;i<n;i++){
      int val;cin>>val;
      v.push_back(val);
      freq[val]++;
    }
    std::vector<pair<int,int>>a;
    for(int i=0;i<=60;i++){
      if(freq[i]!=0){
        pair<int,int>p;
        p.first = i;
        p.second = freq[i];
        a.push_back(p);
      }
    }
      sort(a.begin(),a.end(),cmp);
  /*  for(int i=0;i<a.size();i++){
      cout<<a[i].first<<" "<<a[i].second<<endl;
    }*/
    for(int i=0;i<a.size();i++){
      int x = a[i].first;
      int y = a[i].second;
      while (y--) {
        cout<<x<<" ";
      }
    }
cout<<endl;
  }
return 0;
}
