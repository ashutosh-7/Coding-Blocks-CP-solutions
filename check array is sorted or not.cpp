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
	ll check(ll arr[],ll n)
	{
		if(n==0)
		return 1;
		
		if(arr[0]<=arr[1] and check(arr+1,n-1))
		return true;
		
		return false;
		
	}


int main() {
				fast
			ll n;
			cin>>n;
			ll arr[n];
		
			for(ll i=0;i<n;i++)
			cin>>arr[i];
			ll x=check(arr,n);
			cout<<x;
			
	
	return 0;
}
