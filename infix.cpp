#include<bits/stdc++.h>

 #include<vector>

 using namespace std;

 int postfix(string s){

    stack<char>S;

    string postfix = "";

    for(int i=0;i<s.length();i++)
    {

       if(s[i] == ' '||  s[i] == ',') continue;
       else if(isoperator(s[i]))
       {
          while(!S.empty() && S.top()!= '(' && hashigher(S.top,s[i]) )
           {
             postfix = s[i];
            }
            S.push(s[i]);
        }

       else if(isoperand(s[i])) postfix += s[i];

       else if(s[i] == '(')  S.push(s[i]);

       else if(s[i] == ')')
       {

          while(!S.empty() && S.top() != '('){
            postfix += S.top();
             S.pop();
          }
          S.pop();
       }

    }

    while(!S.empty()){
     postfix += S.top();
     S.pop();

    }

    return posfix;
 }

  int main(){

     string s;
     cin>>s;

     string postfix = infixtopostfix(s);
     cout<<"ouput  = "<<postfix<<endl;

     return 0;
  }
