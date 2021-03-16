#include<bits/stdc++.h>
using namespace std;
void count_freq(string str){
  stringstream s(str);
  string word;
  unordered_map<string,int>umap;
  while(s>>word){
    umap[word]++;
  }
  for(auto &itr:umap){
    cout<<itr.first<<" "<<itr.second<<"\n";
  }
}
int main(){
  string str;
  getline(cin,str);
  count_freq(str);
return 0;
}
