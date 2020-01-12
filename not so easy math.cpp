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

ll num[]={2,3,5,7,11,13,17,19};

int main() {
				fast
				ll t;
				cin>>t;
				while(t--)
				{
					
				ll n;
				cin>>n;
				ll count=0,ans=0;
				for(ll i=1;i<(1<<8);i++)
				{
					count=0;
				ll	temp=1;
					for(ll j=0;j<8;j++)
					{
						if(i&(1<<j))
						{
							count++;
							//temp=(n/num[j]);
							temp*=num[j];
						}
					}
					if(count%2==0)
					{
						ans-=(n/temp);
					}
					else
					ans+=(n/temp);
				}
				
				cout<<ans<<endl;
				
				}
	return 0;
}
