#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 void dfs(int i){

  s[x] = true;
  cout<<x<<" ";

  for(int i:g[x]){
     if(!s[i]) dfs(i);
  }

  return ;
 }


int dfsmain()
{

  int i,x,y,v,e;

  cin>>v>>e;

  vector<int>s;
  vector<vector<int>>g;

  g.assign(v,vector<int>());
  s.assign(v,false);

  for(int i=0;i<e;i++){
   cin>>x>>y;
   g[x].push_back(y);
  }

  for(int i=0;u<v;i++){
   if(!s[i])
   dfs(i);
  }

return 0;
}


 intm

