#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

 int counts(string s,int len){

 int cnt0=0,cnt1=0;
 int ans=0;

 for(int i=0;i<s.length();i++){
   int temp = s[i]-'0';

   if(temp  == 0) cnt0++;
   else cnt1++;
   if(cnt0 == cnt1) ans++; }

  cout<<"no of string "<<ans<<endl;

  return 0;
 }

 int animesh(){




  return 0;
 }

 int main(){

 int t; cin>>t;

 while(t--){
  string s; cin>>s;
  int n = s.length();
   counts(s,n);
 }

 animesh();

  return 0;
 }




 def mult(numbers):
    for i in numbers:
        return i * 10


















