#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 void add(vector<int>graph[],int u,int v){

   graph[u].push_back(v);
   graph[v].push_back(u);

 }

 void print(vector<int>graph[],int n){

   vector<int>::iterator it;

   for(int i=0;i<n;i++){
       for(it = graph[i].begin();it!= graph[i].end();it++){
        cout<<i<<" "<<*it<<endl;
      }
     cout<<'\n';
   }
  return ;
 }

 int main(){

  int n,e,u,v;
  cin>>n>>e;
  vector<int>graph[n];

  for(int i=0;i<n;i++){
    cin>>u>>v;
    add(graph,u,v);
  }

   print(graph,n);

 return 0;
 }
