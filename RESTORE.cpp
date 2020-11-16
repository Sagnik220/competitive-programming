#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ///Sieve of Eratosthenes///
    ll MAX=4000005;
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));
    for (ll i = 2; i*i <= MAX; i++)
        if (prime[i] == true)
            for (ll j = i*i; j<=MAX; j+=i)
                prime[j] = false;
    ll t = 0;
    cin >> t;
    while (t--) 
    {
        ll start =2;
        ll n = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i <n; i++)
        {
            cin >> a[i];
        }
        unordered_map<ll,ll>b;
        for (ll i = 0; i < n; i++)
        {
            if (b.find(a[i])==b.end()) 
            {
                while (prime[start] ==0)
                    start++;
                b[a[i]] = start;
                start++;
            }
        }
        for (ll i = 0; i <n; i++)
        {
            cout << b[a[i]] << " ";
        }
        cout <<endl;
    }
    return 0;
}