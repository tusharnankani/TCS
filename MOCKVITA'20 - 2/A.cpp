#pragma GCC optimize("O3") 

#include <bits/stdc++.h>
using namespace std;

typedef long long int           ll;
typedef unsigned long long int  ull;
typedef long double             ld;

typedef pair<int, int>          pii;
typedef pair<ll,ll>             pll;
typedef vector<int>             vi;
typedef vector<ll>              vll;
typedef vector<pii>             vpii;
typedef vector<pll>             vpll;

#define test(t)		        int t; cin >> t; while(t--)
#define f(i, a, b)	        for(int (i) = (a); (i) < (b); ++(i))
#define all(a)		        (a).begin(), (a).end()
#define endl 		        "\n"
#define maxvec(vec)             *max_element(all(vec))
#define minvec(vec)             *min_element(all(vec))
#define maxarr(arr)             *max_element(arr, arr + n)
#define minarr(arr)             *min_element(arr, arr + n)
#define deb(x)		        cout << #x << "--" << x << "--" << endl;
#define deb2(x,y)	        cout << #x << "-" << x << "-" << " ~~ " <<  #y << "-" << y << "-" << endl;
#define deba(arr)	        cout << #arr << " ~ [ "; for(auto n: arr) cout << n << " "; cout << "]" << endl;
#define debap(arr)	        cout << #arr << " ~ [ "; for(auto n: arr) cout << n.first << "-" << n.second << " "; cout << "]" << endl;
#define fast 		        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define mx9		1000000007
#define mx7		10000007
#define mx6		1000006
#define mx5		200005
#define inf		1<<30                                 
#define eps		1e-9
#define mod		1000000007
#define PI		3.141592653589793238462643383279502884L

void solve()
{
    ll n;
    cin >> n;
    string b, g;
    cin >> b >> g;
    ll g1, b1, g2, b2;
    g1 = g2 = b1 = b2 = 0;
    f(i, 0, n)
    {
        (b[i] == 'm') ? b1 += 1 : b2 += 1;
        (g[i] == 'm') ? g1 += 1 : g2 += 1;
    }

    f(i, 0, n)
    {
        if(b[i] == 'm')
        {
            if(g1 == 0)
            {
                cout << b1 + b2 << endl;
                return;
            }
            g1--;
            b1--;
        }
        else
        {
            if(g2 == 0)
            {
                cout << b2 + b1 << endl;
                return;
            }
            g2--;
            b2--;
        }
    }
    cout << 0 << endl;
}

int main()
{
    fast;
    // test(t)
        solve();
    return 0;
}