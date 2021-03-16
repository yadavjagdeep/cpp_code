#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
void Subset(vector<int>&v){
  int n = v.size();
  for(int i=0;i<pow(2,n);i++){
    for(int j=0;j<n;j++)
    {
      if(i&i<<j)
      cout<<v[j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  std::vector<int> v;
  for(int i=0;i<3;i++)
  v.push_back(i+1);
 Subset(v);
return 0;
}
