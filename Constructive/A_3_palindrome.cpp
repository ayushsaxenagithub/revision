#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	int n;
	cin>>n;
	string s = "aabb",ans;
	for(int i = 0 ; i < n/4 ; ++i){
		ans+=s;
	}
	ans+=s.substr(0,n%4);
	cout<<ans<<endl;
	return 0;
}