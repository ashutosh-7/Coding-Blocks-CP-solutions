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
ll mod=1000000007 ;
 ll power(ll x,ll y)
 {
 	if(y==0)
 	return 1;
 	if(y==1)
 	return x;
 	ll ans=power(x,y/2);
 	if(y%2==0)
 	return ((ans%mod)*(ans%mod))%mod;
 	else
 	return ((x*ans)%mod*(ans)%mod)%mod;
 	
 }


int main() {
				fast
				ll t;
				cin>>t;
				while(t--)
				{
				
			ll n;
			cin>>n;
			if(n==0)
			cout<<1<<endl;
			else if(n==1)
			{
				cout<<108<<endl;
			}
			else if(n==2)
			{
				cout<<6516<<endl;
			}
			else if(n==3)
			{
				cout<<374580<<endl;
			}
			else if(n==4)
			{
				ll x=20203380%mod;
				cout<<x<<endl;
			}
			else
			{
			
			ll x=power(36,n-1);
			ll ans=(1+(power(36,n-2))%mod+(power(36,n-3))%mod+(power(36,n-4))%mod+(3*power(36,n-1))%mod+((power(36,n-1))%mod*((((n*(n+1))/2)-1)))%mod)%mod;
			cout<<ans<<endl;
		} 	
		}
	return 0;
}
