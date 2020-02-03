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
			 
			 ll tile(ll n)
			 {
			 	if(n==1)
			 	return 1;
			 	if(n==4)
			 	{
			 		return 1;
				}
				
				ll x=tile(n-4)+tile(n-1);
				return x;
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
			memset(arr,0,sizeof(arr));
			for(ll i=0;i<n;i++)
			cin>>arr[i];
	}
	return 0;
}
