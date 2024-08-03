#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> a(26,0);
	for(int i = 0 ; i < 26; ++i){
		char c;
		cin>>c;
		int temp = c - 'a';
		a[temp] = 1;
	}
	int ans = 0; 
	int value = 0;
	for(auto c : s){
		int check = c-'a';
		if(a[check]){
			++value;
		}else{
			ans+=(value*(value+1))/2;
			value = 0;
		}
	}
	ans += (value*(value+1))/2;
	cout<<ans<<endl;
	return 0;
}