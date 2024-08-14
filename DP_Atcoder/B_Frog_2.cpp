#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n),dp(n);
	for(int i = 0 ; i < n ; ++i) cin>>a[i];
	dp[0] = 0;
	dp[1] = abs(a[1] - a[0]);
	for(int i = 2 ; i < n ; ++i){
        int temp = 1e17;
		int j = 0;
        j = max(j, i - k);
		for(; j < i ; ++j){
			temp = min(abs(a[j] - a[i]) + dp[j], temp);
		}
		dp[i] = temp;
	}
	cout<<dp[n-1]<<endl;
	return 0;
}