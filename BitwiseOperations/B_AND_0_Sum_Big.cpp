#include<bits/stdc++.h>
#define int long long 

using namespace std;

int mod = 1e9+7;	

void solve(){
	int n,k;
	cin>>n>>k;
	int ans;
	ans = n;
	while(--k){
		ans = ans*n;
		ans = ans % mod;
	}
	cout<<ans<<endl;
}

signed main(){
	int t;
    cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
	