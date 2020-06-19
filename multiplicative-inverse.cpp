
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;	
ll N=1e5+6;		

            ll power(ll a,ll b)
            {
                if(b==0)
                return 1;
                if(b==1)
                return a%mod;

                ll x=power(a,b/2);
                if(b%2==0)
                return (x%mod * x%mod)%mod;

                return ((x*a)%mod * (x%mod))%mod; 
            }
	   
int main() {
			fast
			
           ll n;
           cin>>n;

           ll ans=power(n,(ll)mod-2);
           cout<<ans;
			return 0;
		 }	