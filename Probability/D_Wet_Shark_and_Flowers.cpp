#include<bits/stdc++.h>
#define int long long 
#define float long double

using namespace std;

signed main(){
    cout<<fixed<<setprecision(6)<<endl;
	int n,p;
	cin>>n>>p;
	vector<int> l(n), r(n);
	for(int i = 0 ; i < n ; ++i) cin>>l[i]>>r[i];
	float ans = 0 ; 
	for(int i = 0 ; i < n ; ++i){
		int j = (1+i)%n;
		float pi = (float) ((r[i] / p - (l[i] - 1) / p )) / (r[i] - l[i] + 1);
		float pj = (float) ((r[j] / p - (l[j] - 1) / p )) / (r[j] - l[j] + 1);
		
		float prob = pi + pj - pi*pj;
		
		ans += 2000 * prob;
	}
	cout<<ans<<endl;
	return 0;
}