#pragma GCC optimize("O3") 

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

#define test(t)		int t; cin >> t; while(t--)
#define f(i, a, b)	for(int (i) = (a); (i) < (b); ++(i))
#define all(a)		(a).begin(), (a).end()
#define endl 		"\n"
#define maxvec(vec)     *max_element(all(vec))
#define minvec(vec)     *min_element(all(vec))
#define maxarr(arr)     *max_element(arr, arr + n)
#define minarr(arr)     *min_element(arr, arr + n)
#define deb(x)		cout << #x << " is " << x << endl;
#define deb2(x,y)	cout << #x << " is " << x << " and " <<  #y << " is " << y << endl;
#define deba(arr)	cout << #arr << " ~ [ "; for(auto n: arr) cout << n << " "; cout << "]" << endl;
#define debap(arr)	cout << #arr << " ~ [ "; for(auto n: arr) cout << n.first << "-" << n.second << " "; cout << "]" << endl;
#define fast 		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define mx9		1000000007
#define mx7		10000007
#define mx6		1000006
#define mx5		200005
#define inf		1<<30                                 
#define eps		1e-9
#define mod		1000000007
#define PI		3.141592653589793238462643383279502884L

int main()
{
    fast;
    int t; cin >> t; 
    while(t--)
    {
        ll n;
        cin >> n;
        ld lg = floor(log2(n) + 1);
        ll ans = lg;
        cout << ans << endl;
    }
    return 0;
}