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
				ll a,b;
				cin>>a>>b;
				ll msb=0;
				ll x=a^b;
				while(x)
				{
					msb++;
					x=x>>1;
				}
				//cout<<msb<<endl;
				x=0;
				ll ans=0;
				while(msb--)
				{
					ans+=(1<<x);
					//cout<<ans<<endl;
					x++;
				}
				cout<<ans<<endl;
				
	return 0;
}
