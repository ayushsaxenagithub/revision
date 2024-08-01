#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	int l,r;
	cin>>l>>r;
    if(l==r){
        cout<<0<<endl;
        return 0;
    }
	int t = 64 - __builtin_clzll(l^r);
	cout<<(1ll<<t)-1<<endl;
	return 0;
}