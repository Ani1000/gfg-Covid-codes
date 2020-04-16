#include<bits/stdc++.h>
#include<string.h>
#include <stack>

using namespace std;

 bool ArePair(char opening ,char closing){

 if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;

}


 bool isani(string a){

  stack<char>S;

   for(int i=0;i<a.length();i++){
     if(a[i] == '(' || a[i] == '{' || a[i] == '[')
     S.push(a[i]);
      else if(a[i] == ')' || a[i] == '}' || a[i] == ']')
      {
      if(S.empty() || !ArePair(S.top(),a[i]) )
      return false;
      else
      S.pop();
      }

  }
   return S.empty()?true:false;
 }

int main(){

 string s;
 int t;

 while(t--){
  cin>>s;

if(isani(s) == true)
		cout<<"balanced\n";
	else
		cout<<"not balanced\n";

 }

return 0;

}
