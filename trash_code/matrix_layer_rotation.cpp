#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
  int n,m;
int a[4][4] = {
                       {10, 20, 30, 1},
                       {40, 50, 60, 2},
                       {70, 80, 90, 3},
                       {100, 110, 120, 4}
                   };
                   int arr[1000];
  void clockwise(vector<int>&v,int k){

    int n = v.size();
  //  std::vector<int> arr;
    k = k%n;

    for(int i=0;i<n;i++){
      int p = k+i;
        //cout<<p<<endl;
      if(p>n-1)
      p = p%n;
      arr[p] = v[i];
    }
  //return arr;
   }
   void anticlockwise(vector<int>&v,int k){

     int n = v.size();
   //  std::vector<int> arr;
     k = k%n;

     for(int i=0;i<n;i++){
       int p = i-k;;
         //cout<<p<<endl;
       if(p<0){
         p*=-1;
         p = n-p;
       }
    //   p = p%n;
       arr[p] = v[i];
     }
   //return arr;
    }
    void merge(int x){
      static int t=0,b=n-1,l=0,r=m-1;
      static int div=0;
      if(div==0){
        for(int i=l;i<=r;i++){
          a[t][i]  = arr[x++];;
        }
        t++;div=1;
      }
      if(div==1){
        for(int i=t;i<=b;i++){
          a[i][r] = arr[x++];
        }
        r--;div=2;
      }
      if(div==2){
        for(int i=r;i>=l;i--){
        a[b][i] = arr[x++];
        }
        b--;div=3;
      }
      if(div==3){
        for(int i=b;i>=t;i--){
          a[i][l] = arr[x++];
        }
        l++;div=0;
      }
    }
int main(){

  n=m=4;
  int t=0,b=n-1,l=0,r=m-1;
  int div=0;
  std::vector<int> v;
  int rdir = n;
  while (t<b && l<r) {
    if(div==0){
      for(int i=l;i<=r;i++){
        v.push_back(a[t][i]);
      }
      t++;div=1;
    }
    if(div==1){
      for(int i=t;i<=b;i++){
        v.push_back(a[i][r]);
      }
      r--;div=2;
    }
    if(div==2){
      for(int i=r;i>=l;i--){
        v.push_back(a[b][i]);
      }
      b--;div=3;
    }
    if(div==3){
      for(int i=b;i>=t;i--){
        v.push_back(a[i][l]);
      }
      l++;div=0;
    }
if(rdir%2==1)
clockwise(v,2);
else
anticlockwise(v,2);
rdir--;
  /*  for(int i=0;i<v.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int size = v.size();*/
v.clear();
/*************************************/
//merging of array in original matrix
merge(0);
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<a[i][j]<<" ";
  }
  cout<<endl;
}
  return 0;
}
