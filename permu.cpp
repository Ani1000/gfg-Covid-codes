#include <bits/stdc++.h>
using namespace std;

vector<string>v;

void permute(string a, int l, int r)
{

    // Base case
    if (l == r)
       v.push_back(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

// Driver Code
int main()
{
   int t;
   string str;
   cin>>t;

   while(t--){
   cin>>str;
    int n = str.size();
    permute(str, 0, n-1);
    sort(v.begin(),v.end());

    for(char x:v){
      cout<<v[i];
     }
     v.clear();
    cout<<"\n";
   }

    return 0;
}
