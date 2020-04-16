#include <bits/stdc++.h>
#include <vector>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;


 int ani(string s){

     unordered_set<char>ani;
     unordered_set<char>::iterator it;

     for(int i=0;i<s.size();i++){

          cout<<s[i]<<" ";

         if(ani.find(s[i]) != ani.end()){
            // cout<<s[i];
          ani.insert(s[i]);
         }

     }

    for(it= ani.begin();it!= ani.end();it++)
       cout<<*it;

     return 0;
 }

 void hack(char a[],string b,int &cnt){

  int option =0;

  for(int i=0;i<cnt;i++){
      option += option*b[i]+b[i];
  }




 }

 int

int main()
 {
	//code
	int t,cnt=0;
	cin>>t,x;

	while(t--){

	   vector<char>a[1000];
	   string b;

	   while(cin>>x){
        a.push_back(x);
        cnt++;
	   }

       cin>>b;
        hack(a,b,cnt);
	   // ani(s);


	 // cout<<s<<endl;
	}

	return 0;
}

/*
int stacks(){

 stack<int>_push(int arr[],int n)
{
stack<int> s;
//return a stack with all elements of arr inserted in it
for(int i = 0; i < n; i++)
{
s.push(arr[i]);
}
return s;
}
/* _pop function to print elements of the stack
remove as well

void _pop(stack<int>s)
{
//print top and pop for each element until it becomes empty
while(!s.empty())
{
cout<< s.top()<<" ";
s.pop();
}
}

}
*/
