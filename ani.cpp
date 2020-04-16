#include <bits/stdc++.h>
using namespace std;

vector<int> s;
vector<vector<int>> g;

void bfs(int x){
    queue<int> q;
    int y;
    s[x]=true;
    q.push(x);
    while(!q.empty()){
        y=q.front();
        cout<<y<<" ";
        q.pop();
        for(auto i:g[y]){
            if(!s[i]){
                s[i]=true;
                q.push(i);
            }
        }
    }
}

int main() {

	int i,x,y,v,e;
	cin>>v>>e;
	g.assign(v,vector<int>());
	s.assign(v,false);
	for(i=0;i<e;i++){
	    cin>>x>>y;
	    g[x].push_back(y);
	}
	for(i=0;i<v;i++){
	    if(!s[i])
                bfs(i);
	}

	return 0;
}





wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -


sudo apt-get install apt-transport-https

echo "deb https://download.sublimetext.com/ apt/dev/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

sudo apt-get update
sudo apt-get install sublime-text






