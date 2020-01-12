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
				ll n,k;
				cin>>n>>k;
				ll arr[n];
			ll id[n+1];
			for(ll i=0;i<n;i++)
			{
				cin>>arr[i];
				id[arr[i]]=i;
			}
		
		
			ll count=0;
			for(ll i=0;i<n;i++)
			{
				if(arr[i]!=n-i)
				{
					ll temp1=id[arr[i]];
					ll temp2=id[n-i];
					ll temp3=arr[i];
					
					swap(arr[i],arr[id[n-i]]);
				    id[n-i]=temp1;
				    id[temp3]=temp2;
		
   	count++;
			
				}
				
				if(count==k)
				break;
			}
			for(ll i=0;i<n;i++)
			cout<<arr[i]<<" ";
			
	return 0;
}
