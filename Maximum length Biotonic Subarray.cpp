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
				ll x;
				cin>>t;
				while(t--)
				{
				ll n;
				cin>>n;
				ll arr[n];
				for(ll i=0;i<n;i++)
				cin>>arr[i];
				ll count=0,count2=0;
				ll x=0;
		
			ll inc[n],dec[n];
			inc[0]=1;
			dec[n-1]=1;
			count=1;
				for(ll i=1;i<n;i++)
				{
				
					if(arr[i-1]<=arr[i])
					{
					count++;
						inc[i]=count;
					
				}
				else
				count=1;
				inc[i]=count;
				}
//				inc[n-1]=count;
	count=1;
			//	ll j=0;
					for(ll i=n-2;i>=0;i--)
				{
					
					if(arr[i+1]<=arr[i])
					{
					count++;
					dec[i]=count;
					
				}
				else
				{
				
				count=1;
				dec[i]=count;}
				}
		// 		//dec[0]=count;
		// 		for(ll i=0;i<n;i++)
		// cout<<inc[i]<<"  ";
				ll mx=0;
			for(ll i=0;i<n;i++){
		
			ll d=inc[i]+dec[i];
			if(d>mx)
			mx=d;
		}
		//cout<<mx;
//		if(mx==n)
//		cout<<n<<endl;
//		else
		cout<<mx-1<<endl;
		
				
				//
				}
	return 0;
}
