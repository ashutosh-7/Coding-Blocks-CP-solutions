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
				ll arr[2*n];
				for(ll i=0;i<2*n;i++)
				cin>>arr[i];
				ll x=2*n;
				sort(arr,arr+x);
				x--;
				cout<<arr[x/2];
				
				
			
				
				
				
				
				
	return 0;
}
