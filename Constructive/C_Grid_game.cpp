#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	string s;
	cin>>s;
	int v = 0 , h = 0 ; 
	for(auto c : s){
		if(c == '1'){
			cout<< "1" << " " << h + 1 <<endl;
			h = (h+2) % 4;
		}else{
			cout<< "2" << " " << v+1<<endl;
			v = (v+1) % 4;
		}
	}
	return 0;
}
