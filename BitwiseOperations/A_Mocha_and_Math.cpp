#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
	int n;
	cin>>n;
	int m = -1;
	vector<int> v(n);
	for(int i = 0 ; i < n ; ++i){
		cin>>v[i];
		m = max(m, v[i]);
	}
	for(int i = 0 ;i < n ; ++i){
		m &= v[i];
	}
	cout<<m<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}