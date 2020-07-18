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

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
    if (n <= 3) 
        return 1; 

    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return 1; 
} 

int main()
{
    fast;
    ll a, b;
    cin >> a >> b;
    vector<ll> p, ans;
    f(i, a, b + 1)
    {
        if(isPrime(i))
            p.push_back(i);
    }

    ll mn = mx9, mx = -1;

    f(i, 0, p.size())
        f(j, 0, p.size())
        {
            if(i == j)
                continue;

            ll check = (('0' + p[i]) + ('0' + p[j])) - '0';
            if(isPrime(check))
            {
                ans.push_back(check);
                mn = min(mn, check);
                mx = max(mx, check);
            }
        }

    ll len = ans.size();
    ll c = mn, d = mx;
    len -= 2;
    while(len--)
    {
        ll tmp = c + d;
        c = d;
        d = tmp;
    }
    cout << d << endl;
    return 0;
}