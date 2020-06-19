#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;	
ll N=100005;
ll ans[10000005];
	   
int main() {
			fast
			
			
			ans[1]=-1;
			for(ll i=1;i<N;i++)
			{
				ll sum=0;
				for(ll j=1;j*j<=i;j++)
				{
					if(i%j==0)
					{
						if(i/j==j and j!=1)
						{
							sum+=j;
						}
						else
						{
							sum+=j;
							sum+=(i/j);
						}
						
					}
				}
				ans[sum]=i;
				
				// cout<<i<<" "<<sum<<endl;
			}

			ans[1]=1;
			ans[2]=0;

			ll t;
			
			while(1)
			{
				ll n;
                cin>>n;

				if(n==0)
				return 0;
                
				if(ans[n]==0)
				cout<<-1<<endl;
				else
				cout<<ans[n]<<endl;
				
                
			}
			return 0;
		 }	