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
ll count(ll n)
{
	ll ans=0;
	while(n)
	{
		ans++;
		n/=10;
	}
	return ans;
}
int main() {
				fast
				ll n;
				cin>>n;
				ll digit=count(n);
				ll ans=1<<(digit);
				ans-=1;
				ll x=0;
				ll l=0;
				while(n)
				{
					if(n%10==7)
					{
					//	cout<<"j";
						x+=(1<<l);
					}
					n/=10;
					l++;
			}
		//	cout<<x<<endl;
			cout<<ans+x<<endl;
	return 0;
}
