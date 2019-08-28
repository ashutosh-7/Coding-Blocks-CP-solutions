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
			ll n;
			cin>>n;
			ll arr[n];
			for(ll i=0;i<n;i++)
			cin>>arr[i];
			ll left[n],right[n];
			left[0]=0;
			left[1]=arr[0];
			right[n-1]=0;
			right[n-2]=arr[n-1];
			for(ll i=2;i<n;i++)
			{
			
				ll x=max(arr[i-1],left[i-1]);
				left[i]=x;
				
			}
			for(ll i=n-3;i>=0;i--)
			{
				ll x=max(arr[i+1],right[i+1]);
				right[i]=x;
			}
			ll x=0;ll sum=0;
			for(ll i=1;i<n-1;i++)
			{
				x=(min(left[i],right[i]));
				if(x>arr[i])
				{
				x=x-arr[i];
			sum+=x;
			}
				
				//cout<<sum<<" ";
			}
//			
//			for(ll i=0;i<n;i++)
//		cout<<left[i]<<"  ";
			
	cout<<sum;
	return 0;
}
