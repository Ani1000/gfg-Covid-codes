#include<bits/stdc++.h>
#include<string.h>
#include <stack>

using namespace std;

  bool arepair(char opening ,char closing){


    if(opening  == '(' && closing  == ')') return true;
    else if(opening == '{' && closing  == '}') return true;
    else if(opening  == '[' && closing  == ']') return true;

     return false;
   }

  bool isani(string a){

   stack<char>S;

   for(int i=0;i<a.length();i++){
       if(a[i] == '(' || a[i] == '{' || a[i] == '[')
       S.push(a[i]);

       else if(a[i] == ')' || a[i] == '}' || a[i] == ']'){
        if( !arepair( S.top(),a[i]) || S.empty() )
             return false;
         else S.pop();
          }
       }

     return S.empty()?true:false;
  }

int main(){

  int t;
  cin>>t;

  while(t--){
 string s;
 cin>>s;
if(isani(s) == true) cout<<"balanced\n";
	else cout<<"not balanced\n";
  }

return 0;
}





















































