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
		ll search(ll arr[],ll n,ll x)
		{
			if(n==1)
			{
				if(arr[0]==x)
				return 1;
				else
				return 0;
			}
			
			if(arr[0]==x or search(arr+1,n-1,x))
			return 1;
			return 0;
		}

int main() {
				fast
				
			ll n,x;
			cin>>n>>x;
			ll arr[n];
		//	memset(arr,0,sizeof(arr));
			for(ll i=0;i<n;i++)
			cin>>arr[i];
			cout<<search(arr,n,x);
//	}
	return 0;
}
