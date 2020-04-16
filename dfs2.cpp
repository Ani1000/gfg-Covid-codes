#include<bits/stdc++.h>
#include<conio.h>

  using namespace std;

  //vector<int>a[];

 void dfs(int x,vector<int>g[],bool vis[]){

 vis[x] = true;
 cout<<x<<" ";

 vector<int>::iterator it;

  for(it = g[x].begin();it!= g[x].end();it++){
     if(!vis[*it])
     dfs(*it,g,vis);
  }

  return ;
 }

 void add(vector<int>a[],int u,int v){

  a[u].push_back(v);
  a[v].push_back(u);
 }

  int main(){

   int t;
   cin>>t;

   while(t--){

   int v=0,e=0;
  cin>>v>>e;
  vector<int>a[v];

   for(int i=0;i<e;i++){
    int q,w;
     cin>>q>>w;
     add(a,q,w); }

   bool vis[v] = {false};

    for(int i=0;i<v;i++)
      if(!vis[i]) dfs(i,a,vis);

 }

    return 0;
  }
