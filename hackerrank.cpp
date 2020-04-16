#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;


int main() {

    int n,j;

    cin>>n>>j;
   priority_queue<int,vector<int>,greater<int>>q;

   for(int i=0,x;i<n;i++){
     cin>>x;
     q.push(x);
   }

   int cnt=0;
   while(true){

    int x;
    x = q.top();

    if(x<k){
       q.pop();
       if(q.empty()){
        cout<<"-1"<<endl;
        break; }

        int y = 2*q.top();
        q.pop();
        q.push(x+y);
        cnt++;
     }
     else{
      cout<<cnt<<endl;
      break; }

   }


   return 0;
   }
