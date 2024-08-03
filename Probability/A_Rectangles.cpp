#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
	cout<<fixed<<setprecision(0);
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n, vector<int>(m,0));
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin>>a[i][j];
		}
	}
	int ans = n*m;
	for(int i = 0 ; i < n ; ++i){
		int ones = 0 , zeros = 0 ;
		for(int j = 0 ; j < m ; ++j){
			if(a[i][j]) ++ones;
			if(!a[i][j]) ++zeros;
		}
		if(ones > 1){

			ans+= (pow(2,ones) - ones - 1);
		}
		if(zeros > 1) {
			ans += (pow(2,zeros) - zeros - 1);
		}
		ones = 0;
		zeros = 0;
	}
	for(int i = 0 ; i < m ; ++i){
		int ones = 0 , zeros = 0 ;
		for(int j = 0 ; j < n ; ++j){
			if(a[j][i]) ++ones;
			if(!a[j][i]) ++zeros;
		}
		if(ones > 1){
			ans+= (pow(2,ones) - ones - 1);
		}
		if(zeros > 1) {
			ans += (pow(2,zeros) - zeros - 1);
		}
		ones = 0;
		zeros = 0;
	}
	cout<<ans<<endl;
	return 0;
}