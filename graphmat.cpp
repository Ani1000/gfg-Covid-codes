#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 void solve(){

  int n,e,u,v;
  cin>>n>>e;
  int m[n][n];

  for(int i=0;i<=e;i++){
    cin>>u;
    cin>>v;
   m[u][v] = 1;
   m[v][u] = 1;
  }

   return ;
}

 void print(){

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(m[i][j] == 1)
       cout<<i<<" "<<j<<endl; }
  }

  return ;
 }

 int main(){

  int t;
  cin>>t;

  while(t--){
    solve();
    print();
  }

  return;
 }
