#pragma GCC optimize("O3") 

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >>  t;
    vector<ld> tim;
    ull cnt = 0, a[1000];

    while(t--)
    {
        ll x, y, z, cnt = 0;
        cin >> x >> y >> z;
        ld val = (sqrt(x*x + y*y)) / z;
        // time = dist / speed;
        tim.push_back(val);
    }

    // deba(tim)
    ll sz = tim.size();
    for(ll i = 0; i < sz; i++)
        for(ll j = i + 1; j < sz; j++)
        {
            if(i == j)
                continue;

            if(tim[i] == tim[j])
                cnt += 1;
        }

    cout << cnt << endl;

    return 0;
}       