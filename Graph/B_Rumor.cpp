#include<bits/stdc++.h>
#define int long long 

using namespace std;

vector<vector<int>> v;
vector<int> visited;
vector<int> price;

int dfs(int starting){
	visited[starting] = true;
	int p = price[starting];
	for(auto i : v[starting]){
		if(!visited[i]){
			int temp = dfs(i);
			p = min(p,temp);
		}
	}
	return p;
}
	

signed main(){
	int n,m;
	cin>>n>>m;
	v.resize(n);
	price.resize(n);
	visited.resize(n,false);
	for(int i = 0 ; i < n ; ++i) cin>>price[i];
	for(int i = 0 ; i < m ; ++i){
		int u,s;
        cin>>u>>s;
        --u;--s;
		v[u].push_back(s);
		v[s].push_back(u);
	}
	int ans = 0;
	for(int i = 0 ; i < n ; ++i){
		int p = 0 ;
		if(!visited[i]){
			p = dfs(i);
		}
		ans+=p;
	}
	cout<<ans<<endl;
	return 0;
}
	