#include<bits/stdc++.h>
#include<set>
using namespace std;

// set<string>iterator it;

int needlen = 0;
set<char>ani;
set<char>::iterator it;

void subString(string s, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
        cout<<"i "<<i<<" length "<<len<<endl;
            string a = s.substr(i, len);
            int leng = a.length();

            cout<<a<<endl;

        if(leng == needlen){
    cout<<"anyone inside the hell"<<endl;

        int flag = 0 ;
        int j=0;
           for(it = ani.begin();it != ani.end();++it)
           {

             if(*it != a[j]){
               flag = 1;
               break;  }
               j++;
           }
           if(flag == 0){
           cout<<a<<endl;
            cout<<" the size is "<<ani.size()<<endl;
            }

            }

        }
     }

     return ;
}



int main()
{
    int t;
    cin>>t;

    while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
         ani.insert(s[i]);
     }

     cout<<"the length of string "<<ani.size()<<endl;

   // ani.insert(s);
    int needlen = ani.size();
    subString(s,s.length());

    }

    return 0;
}
