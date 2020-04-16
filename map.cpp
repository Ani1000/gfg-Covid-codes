
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	    unordered_map<char,int> m;
	   unordered_map<char,int>::iterator it ;

	while(t--)
	{
	    m.clear();
	    int n;
	    cin>>n;

	   string s;
	   cin>>s;

	    for(int i=0;i<n;i++)
	    m[s[i]]++;

	    int f=0;

	    for(it=m.begin();it!=m.end();it++)
	    {

	        if((it->second)==1){
	        cout<<it->first<<endl;
	        f=1;
	        break; }

	    }

	    if(f==0)  cout<<-1<<endl;

	}
	return 0;
}



int main(){

  queue<int>q;
   int charCount[SIZE];

   while(t--)
  {
    string s;

   for(int i=0;i<s.length();i++){
      q.push(s[i]);
      charCount[s[i]-'a']++;

      while(!q.empty())
      {
        if(charCount[q.front()-'a'] > 1)
         q.pop();
         else {
           cout<<q.front()<<" ";
           break; }
      }
      if(q.empty()) cout<<"-1"<<endl;

      }

     }

}
