#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<cstdbool>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int suma=0;
        int sumb=0;
       vector<int>a;
       vector<int>b;
        for(int i=0;i<n;i++){
            int val;cin>>val;
            a.push_back(val);
            suma+=val;
        }
        for(int i=0;i<m;i++){
            int val;cin>>val;
            b.push_back(val);
            sumb+=val;
        }
          bool flag = false;
        if((suma+sumb)%2 == 0){
          int ans = (suma+sumb)/2;

        if(suma>sumb){
            unordered_map<int,int>umap;
            for(int i=0;i<a.size();i++){
                umap.insert(make_pair(a[i],1));
            }
            int x = ans-sumb;
            for(int i=0;i<b.size();i++){
                int f = x+b[i];
                if(umap.find(f)!=umap.end()){
                    flag = true;
                    break;
                }
            }
        }else{
            unordered_map<int,int>umap;
            for(int i=0;i<b.size();i++){
                umap.insert(make_pair(b[i],1));
            }
            int x = ans-suma;
            for(int i=0;i<a.size();i++){
                int f = x+a[i];
                if(umap.find(f)!=umap.end()){
                    flag = true;
                    break;
                }
            }
        }
        }

        if(flag)
        cout<<1<<endl;
        else
        cout<<-1<<endl;
    }
return 0;
}
