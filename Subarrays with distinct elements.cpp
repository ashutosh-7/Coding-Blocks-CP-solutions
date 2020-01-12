#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
int main() {
				fast
				ll n;
				cin>>n;
				ll arr[n];
				for(ll i=0;i<n;i++)
				cin>>arr[i];
				
				set<ll> s;
				ll count=0;
				ll sum=0;
				ll mx=0;
			ll j=0;
			for(ll i=0;i<n;i++)
			{
				
				while(j<n and s.find(arr[j])==s.end())
				{
					s.insert(arr[jw]);
				//	sum++;
					j++;
				}
				sum=j-i;
				//cout<<sum<<" ";
				mx+=(sum*(sum+1))/2;
				sum=0;
				s.erase(arr[i]);
				
			}
			ll ans=mx%mod;
			cout<<ans;
				
				
	return 0;
}
