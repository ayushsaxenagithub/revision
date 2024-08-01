#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
	cout<<fixed<<setprecision(0);
	int n;
	cin>>n;
	if(n%2!=0){
		cout<< 0 <<endl;
	}else{
		cout<<pow(2,n/2)<<endl;
	}
	return 0;
}