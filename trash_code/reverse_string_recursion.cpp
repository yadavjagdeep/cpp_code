#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string rev(string str){
  if(str.length()<2)
  return str;

  return rev(str.substr(1,str.length()))+str[0];
}
int main(){

string str;
getline(cin,str);// "abcde";
cout<<rev(str);
return 0;
}
