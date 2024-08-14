#include<bits/stdc++.h>
#define int long long 

using namespace std;
// Method 1

vector<int> w,v;

vector<vector<int>> dp;
vector<vector<int>> dp1;

int maxvalue(int m, int n , int pos){
	if(pos>=n) return 0;
    if(dp[m][pos]!=-1) return dp[m][pos];
	int ans = maxvalue(m,n,pos+1);
	if(m-w[pos] >= 0) ans = max(ans, v[pos]+maxvalue(m-w[pos], n , pos+1));
	return dp[m][pos] = ans;
}
	
signed main(){
	int n , m;
	cin>>n>>m;
	w.resize(n);
	v.resize(n);
    dp.resize(m+1,vector<int>(n,-1));
    dp1.resize(n+1,vector<int>(m+1,0));
    for(int i = 0 ; i < n ; ++i) cin>>w[i]>>v[i];
    //Method 2
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 0 ; j <= m ; ++j){
            dp1[i][j] = dp1[i-1][j];
            if(j>=w[i-1]){
                dp1[i][j] = max(dp1[i][j],v[i-1] + dp1[i-1][j-w[i-1]]);
            }
        }
    }
    // for Method 1
	int ans = maxvalue(m,n,0); 
	cout<<dp1[n][m]<<endl;
	return 0;
}

// Method 3

// signed main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> dp(m+1,0);
//     int ans = 0;
//     for(int i = 0 ; i < n ; i++){
//         int w,v;
//         cin>>w>>v;
//         for(int j = m ; j >= w ; j--){
//             dp[j] = max(dp[j], dp[j-w] + v);
//             ans = max(ans, dp[j]);
//         }
//     }
//     cout<<ans<<endl;
// }