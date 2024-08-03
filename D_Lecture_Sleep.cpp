#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n),b(n);
	for(int i = 0 ; i < n ; ++i) cin>>a[i];
	for(int i = 0 ; i < n ; ++i) cin>>b[i];
	vector<int> sl(n), nsl(n);
	sl[0] = b[0]*a[0];
	nsl[0] = a[0];
	for(int i = 1 ; i < n ; ++i){
		nsl[i] = nsl[i-1] + a[i];
		sl[i] = sl[i-1] + b[i]*a[i];
	}
	int ans = 0;
	for(int i = 0 ; i + k < n ; ++i){
		int first = 0,second = 0,third = 0;
		if(i>0) first = a[i-1];
		if(i==0){
		second = nsl[k-1];
		}else{
			second = nsl[k+i-1] - nsl[i-1];
		}
    }
}