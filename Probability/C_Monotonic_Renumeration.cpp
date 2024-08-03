#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int mod = 998244353;

signed main(){
	cout<<fixed<<setprecision(0);
	int n;
	cin>>n;
	map<int,int> lpos;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i){
		cin>>a[i];
		lpos[a[i]] = i;
	}
	int ngrps=0, lastp=0;
	for(int i = 0 ; i < n ; ++i){
		lastp = max(lastp, lpos[a[i]]);
		if(i==lastp) ngrps++;
	}
	int ans = 1;
	for(int i = 0 ; i < ngrps - 1; ++i){
		ans*=2;
		ans%=mod;
	}
	cout<<ans<<endl;
	return 0;
}
		