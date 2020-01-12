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
				ll id[64]={0};
			
				for(ll i=0;i<n;i++)
				{
					cin>>arr[i];
					ll j=0;
					while(arr[i])
					{
						if(arr[i]&1)
						id[j]++;
						j++;
						arr[i]>>=1;
					}
				}
				ll ans=0;
				for(ll i=0;i<64;i++)
				{
					ans+=((id[i])%3)*(1<<i);
				}
				cout<<ans;
				
				
				
				
				
	return 0;
}
