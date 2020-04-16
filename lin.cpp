#include <bits/stdc++.h>#include<bits/stdc++.h>
#include<vector>
#include<stack>

using namespace std;


void reverses(string s,int start,int ends){

  int temp;

  if(start >= ends)  return ;

   temp = s[start];
   s[start] = s[ends-1];
   s[ends-1] = temp;

   reverses(s,start+1,ends-1);

   return ;
}


int main()
{

  string s;
  cin>>s;

  int length = s.length();

 reverses(s,0,length-1);

    return 0;
}


 using namespace std;

  void solve(){

   int t,Q;
   cin>>t;

   while(t--)
   {
      int n,st,e,finds;

    while(n--){

    cin>>n>>Q;
     cin>>st>>e;

   int a[e] = {0};
    int cnt=0;

      for(int i=st;i<=e;i++){
       a[i] = i;
        cnt++; }

      while(Q){
        int flag = 0;
       cin>>finds;
    /*
       for(int i=st;i<=e;i++){
         if(a[i] == finds){
          cout<<a[i]<<endl;
           break; }
        else{
        cout<<"-1"<<endl;
        break; }
        }
        */

        if(binary_search(a,a+cnt,a[finds]))
        cout<<a[finds]<<endl;
        else if(binary_search(a,a+cnt,a[finds]) == 0 && flag == 0){
         cout<<"-1"<<endl;
         flag = 1; }
          Q--;
        }

     }
//           animesh.clear();
   }

   return ;
  }

 int main(){

  solve();

  return 0;
 }
