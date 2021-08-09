#include <bits/stdc++.h>
using namespace std;

/******************************* Macros **********************************/

#define F first;
#define S second;
#define eb emplace_back
#define mp make_pair
#define pb push_back
#define SQR(x) ((ll)(x) * (x))
#define SCD(t) scanf("%d", &t)
#define SCllD(t) scanf("%lld", &t)
#define SCF(t) scanf("%f", &t)
#define fo(i, a) for (ll i = 0; i < a; i++)
#define For(i, a, b) for (ll i = a; i < b; i++)
#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i >= k; i -= in)
#define TC(t) while (t--)
#define all(name) name.begin(), name.end()
#define rall(name) name.end(), name.begin()
#define alla(arr, sz) arr, arr + sz
#define SIZE(v) (ll) v.size()
#define SORT(v) sort(all(v))
#define REVERSE(v) reverse(all(v))
#define SORTA(arr, sz) sort(alla(arr, sz))
#define REVERSEA(arr, sz) reverse(alla(arr, sz))
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define INF 1000000000000000005ll;
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define endl "\n"
#define deb(x) cout << #x << " = " << x << endl;
#define fastio  ios_base::sync_with_stdio(false);\
                cin.tie(NULL);\
                cout.tie(NULL);

/******************************* Type Definitions **********************************/

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef map<ll, ll> mapll;
typedef set<ll> setll;
typedef multiset<ll> msetll;
typedef pair<string, string> pss;

/******************************* Function Declarations **********************************/

bool isPowerOfTwo(ll);
bool isPrime(ll);
void swapNum(ll, ll);
ll numOfDigits(ll);
inline string uppercase(string);
inline string lowercase(string);
double tick();
ll power(ll, unsigned int,ll);
/******************************* Solve Cases **********************************/
void solve()
{
   
}

/******************************* Start of Main **********************************/

int main()
{
    fastio
    ll t = 1;
    cin>>t;
    TC(t)
    {
        solve();
    }
    return 0;
     //cout<<"Execution time : "<<tick()<<"\n";
}
/******************************* End of Main Function **********************************/

/******************************* Function Definitions **********************************/

bool isPrime(ll n)
{
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i += 2)
    {
        if (n % 2 == 0)
            return true;
        if (i == 2)
            ++i;
        else
            i += 2;
    }
    return false;
}

bool isPowerOfTwo(int x)
{
    return x && (!(x & (x - 1)));
}

void swapNum(ll &a, ll &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

ll numOfDigits(ll N)
{
    return (floor(log10(N)) + 1);
}
ll power(ll x, unsigned int y, ll p)
{
    ll res = 1;  // Initialize result

    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
inline string uppercase(string s)
{
    int n = SIZE(s);
    fo(i, n) if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

inline string lowercase(string s)
{
    int n = SIZE(s);
    fo(i, n) if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}

double tick()
{
    static clock_t oldt, newt = clock();
    double diff = 1.0 * (newt - oldt) / CLOCKS_PER_SEC;
    oldt = newt;
    return diff;
}
