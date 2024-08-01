#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> ones(64,0);
	for(int i = 0 ; i < n ; ++i){
		cin>>a[i];
		int temp = __builtin_clzll(a[i]);
		ones[temp]+=1;
	}
	int ans = 0;
	for(int i = 0 ; i < 64; ++i){
		ans+=(ones[i]*(ones[i]-1))/2;
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