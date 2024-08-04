#include<bits/stdc++.h>
#define int long long 

using namespace std;

void solve(){
	int n, t;
	cin>>n>>t;
	//(t-1)%n +1
    --t;
	if(n%2==0){
		cout<<t%n + 1<<endl;
		return;
	}
    int rot = n/2;
	cout<< (t + t/rot) % n + 1 << endl;
	return ;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}