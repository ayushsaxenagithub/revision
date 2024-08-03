#include<bits/stdc++.h>
#define int long long 

using namespace std;

signed main(){
    cout << fixed << setprecision(12);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double r = ((double)(b - a) / b) * ((double)(d - c) / d);
    double ans = ((double)a / b) / (1 - r);
    cout << ans << endl;
    return 0;
}
