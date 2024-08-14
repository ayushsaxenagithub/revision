#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
	int n;
	cin>>n;
	vector<int> a(n),b(n),c(n);
	for(int i = 0 ; i < n ; i++) cin>>a[i]>>b[i]>>c[i];
	for(int i = 1; i < n ; ++i){
        a[i] = a[i] + max(b[i-1], c[i-1]);
        b[i] = b[i] + max(c[i-1], a[i-1]);
        c[i] = c[i] + max(a[i-1], b[i-1]);
	}
	int ans = 0;
    ans = max(c[n-1], max(a[n-1], b[n-1]));
	cout<<ans<<endl;
	return 0;
}