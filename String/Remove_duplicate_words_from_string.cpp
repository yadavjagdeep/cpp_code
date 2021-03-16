#include<iostream>
#include<cstring>
#include<unordered_map>
#include<sstream>
#include<unordered_set>
using namespace std;
int main(){
  string str;
  getline(cin,str);
  string word;
  unordered_set<string>set;
  unordered_map<string,int>umap;
  stringstream s(str);
/*  while (s >> word) {
   set.insert(word);
  }
  for(auto x:set)
  cout<<x<<endl;*/
  while (s >> word) {
  if(umap.find(word)==umap.end()){
    umap.insert({word,1});
  }else{
    umap[word]++;
    //umap.insert({word,x});
  }
  }
  unordered_map<string,int>::iterator itr;
/*  for(auto itr = umap.begin();itr!=umap.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }*/
  stringstream ss(str);
  while (ss >> word) {
    if(umap.find(word)!=umap.end()){
      auto it = umap.find(word);
      if(it->second>0)
      cout<<word<<" ";
      umap[word]=0;
    }
  }
return 0;
}
