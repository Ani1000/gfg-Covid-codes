#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

  int animesh(string s,int n){

    int a[26] = {0};

    for(int i=0;i<s.length();i++){
      int x = s[i]-'a';
      a[x]++;
    }

 int Max_n = 0;

  for(int i=0;i<26;i++){
   if(a[i] > Max_n)
   Max_n  = a[i];
   }

   cout<<Max_n-1<<endl;

   }

  int ani(string s){

   for(int i=0;i<s.length();i++){
       string subs = str.substr(i,j);
       cout<
    }


  }

 int main(){

 int t;
 cin>>t;

 while(t--){

  int n;
  cin>>n;

  string s;
  cin>>s;

  //animesh(s,n);
  ani(s);
 }

  return 0;
 }
