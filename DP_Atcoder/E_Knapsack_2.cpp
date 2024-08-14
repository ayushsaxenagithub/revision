#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int inf = 1e17;


signed main(){
    int n,m,s=0;
    cin>>n>>m;
    vector<int> w(n),v(n);
    for(int i = 0 ; i < n ; ++i){
        cin>>w[i]>>v[i];
        s += v[i];
    }
    vector<int> dp(s+1,inf);
    dp[0] = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = s ; j >= v[i] ; j--){
            dp[j] = min(dp[j], dp[j-v[i]] + w[i]);
        }
    }
    int ans = 0;
    for(int i = 0 ; i <= s ; i++){
        if(dp[i]<=m){
            ans = max(ans, i);
        }
    }
    cout<<ans<<endl;
}