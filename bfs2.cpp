#include<bits/stdc++.h>
#include<vector>

  using namespace std;

   void add(vector<int>v[],int x,int y){

     v[x].push_back(y);
    // v[y].push_back(x);
   }

   void bfs(int x,vector<int>v[],bool ani[]){

    queue<int>Q;
    int y;
 ani[x] = true;
    Q.push(x);
      vector<int>::iterator it;

  while(!Q.empty()){
     y = Q.front();
     cout<<y<<" ? ";
     Q.pop();


    for(it = v[y].begin();it!= v[y].end();it++){
        if(!ani[*it]){
         ani[*it] = true;
         Q.push(*it); }
    }

  }

  return ;
   }

  int main(){

   int t;
   cin>>t;

   while(t--){

   int n,e;
   cin>>n>>e;
   vector<int>v[n];

   for(int i=0;i<e;i++){
     int a,b;
      cin>>a>>b;
     add(v,a,b); }

  bool ani[n] = {false};

   for(int i=0;i<n;i++){
      if(!ani[i])
      bfs(i,v,ani); }

   }

 return 0;
  }
