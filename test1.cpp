#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


 int main(){

 int t;

cin>>t;

  while(t--){
  string a,b,tmp;
  int flag = 0;
  cin>>a>>b;
  int f=0;

  for(int i=0;a.size();i++){
     tmp = a[0];
     a = a.substr(1,a.length()-1);
     a += tmp;
     if(a.compare(b) == 0)
     {
      cout<<"1"<<endl;
      flag = 1;
      break;
      }
   }

  if(flag == 0)
     cout<<"0"<<endl;
  }

return 0;
 }
