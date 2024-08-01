#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	int n;
	cin>>n;
	map<int,int> m;
    int ans = 0;
	for(int i = 0 ; i < n ; ++i){
		string s;
		cin>>s;
		int value = 0 ; 
		for(auto c : s){
			value ^= (1<<(c-'a'));
		}
		++m[value];
		for(int flip = 0 ; flip < 26 ; ++flip){
            value ^= (1 << flip); // Flip the bit at position 'flip'
            ans += m[value]; // Add the count of the flipped bitmask which already exists and can make pair with it.
            value ^= (1 << flip); // Flip the bit back to its original state
		}
	}
	for(auto i : m){
		ans += (i.second*(i.second-1))/2;
	}
	cout<<ans<<endl;
	return 0;
}