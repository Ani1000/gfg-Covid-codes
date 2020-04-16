#include <bits/stdc++.h>

 using namespace std;

 int main(){

  int t,x;

  cin>>t;

  while(t--){
   int n,start;
   cin>>n;
   cin>>start;

  int v[n];
  int c[n];

  for(int i=0;i<n;i++){
     cin>>v[i];
     }

   int d = n-start;
   int i=0;
   while(d<n){
      c[d] = v[i];
      d++;
      i++;
   }

   int ani = 0;
   while(ani<d){
   c[ani++] = v[i];
   i++;
  }

 for(int i=0;i<n;i++){
  cout<<c[i]<<" "; }

  }

return 0;

 }
