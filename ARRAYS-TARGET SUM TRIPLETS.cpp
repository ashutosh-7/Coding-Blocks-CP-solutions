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
			ll x;
			cin>>x;
			sort(arr,arr+n);
			ll low,high;
			for(ll i=0;i<n;i++)
			{
				low=i+1;
				high=n-1;
				while(low<high)
				{
					ll sum=arr[i]+arr[low]+arr[high];
					if(sum==x)
					{
					cout<<arr[i]<<", "<<arr[low]<<" and "<<arr[high]<<endl;
				low++;
				high--;	
				}
					else if(sum>x)
					{
						high-=1;
					}
					else
					low+=1;
				}
			}
			
	return 0;
}
