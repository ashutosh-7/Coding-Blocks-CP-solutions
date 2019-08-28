#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

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
				cout<<ms<<endl;
				
				
				}
	return 0;
}
