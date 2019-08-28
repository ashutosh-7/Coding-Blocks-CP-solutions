#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int kadane1(ll arr[],ll n)
{
	ll cs=0;
					ll ms=0;
					for(ll i=0;i<n;i++)
					{
					cs+=arr[i];
					if(cs<0)
						cs=0;
						if(cs>ms)
						ms=cs;
					}
					return ms;
}

int main() {
				fast
				ll t;
				cin>>t;
				while(t--)
				{
					ll n;
					cin>>n;
					ll arr[n];
					for(ll i=0;i<n;i++)
					cin>>arr[i];
					ll k3=kadane1(arr,n);
					ll k2=0;
					for(ll i=0;i<n;i++)
					{
						k2+=arr[i];
						arr[i]=-arr[i];
						
					}
					k2=k2+kadane1(arr,n);
					cout<<max(k2,k3)<<endl;
					
					
				}
	return 0;
}
