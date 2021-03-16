#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstdbool>
using namespace std;
void sort(vector<int> &v)
{
  bool flag=true;
  while (flag) {
    flag=false;
    for(int i=0;i<v.size()-1;i++)
    {
      if(v[i]>v[i+1])
      {
        int temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
        flag=true;
      }
    }
  }
}
int main()
{
  int n;cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int x;cin>>x;
    v.push_back(x);
  }
  sort(v);
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
return 0;
}
