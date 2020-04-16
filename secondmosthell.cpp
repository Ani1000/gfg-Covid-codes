#include <bits/stdc++.h>
#include <vector>
#include <string>
#include<map>

 using namespace std;

  void solve(){

   int n;
   cin>>n;

   string s[n];

   unordered_map<string,int>m;

   for(int i=0;i<n;i++){
    cin>>s[i];
    m[s[i]]; }

    int j = 2;
    int t=0;

    while(j--){
     int maxi = 0;

     for(int i=0;i<n;i++)
     {
      if(m[s[i]] > maxi){
       maxi  = m[s[i]];
       t = i; }
     }

    }

  return ;
  }

 int main(){

  int t;
  cin>>t;

  while(t--){
   solve();
   cout<<endl; }

   return 0;
 }
