#include<bits/stdc++.h>
#define int long long 

using namespace std;

vector<vector<int>> v;

bool dfs(int startingvertex, int t){
	for(auto i : v[startingvertex]){
        if(i==t){
            return true;
        }else{
            return dfs(i,t);
        }
    }
	return false;
}

signed main(){
	int n,t;
	cin>>n>>t;
	--t;
	v.resize(n);
	for(int i = 0 ; i < n-1 ; ++i){
		int temp;
		cin>>temp;
		v[i].push_back(temp + i);
	}
	bool ans = dfs(0,t);
	if(ans) cout<<"YES"<<endl;
	if(!ans) cout<<"NO"<<endl;
	return 0;
}