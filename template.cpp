#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;

using u32 = uint32_t;
using u64 = uint64_t;

#define line "\n"
#define endl "\n"
#define int long long 
#define PI 3.14159265358979323
#define debug(x) cerr << #x << " = " << x << endl;
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORR(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int mod = 1e9+7, inf = LONG_LONG_MAX;


template <typename T>
void print(const T& value) {
    cout << value;
}

template <typename T>
void println(const T& value) {
    cout << value << endl;
}

template <typename T>
void print(const vector<T>& v) {
    for (const T& element : v) {
        cout << element << " ";
    }
}

template <typename T>
void println(const vector<T>& v) {
    print(v);
    cout << endl;
}

int gcd(int a, int b){ return(b==0)? a : gcd(b,a%b); }

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

template <typename T>
T power(T base, T exponent) {
    T result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    vector<int> primes;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

vector<int> divisors(int n) {
    vector<int> divs;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {
                divs.push_back(n / i);
            }
        }
    }
    sort(all(divs));
    return divs;
}

void solve(){
    int n;
    int value = 'c' - 'a';
    cout<<value<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
    // debug(t);
    while(t--){
        solve();
    }
}