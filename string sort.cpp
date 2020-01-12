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
bool compare(string x, string y)
{
	ll a=x.size();
	ll b=y.size();
	// if(a>=b and x<=y)
	// return x<y;
	ll i=0;
	ll count=0;
	while(a>0 and b>0)
	{
		if(x[i]==y[i])
		count++;
		i++;
		a--;
		b--;
		
	}
	if(count==x.size() or count==y.size())
	{
	       return x.size()>y.size();
	}
	else return x<y;
}

int main() {
				fast
				ll n;
				cin>>n;
				string s[n];
				for(ll i=0;i<n;i++)
				{
				cin>>s[i];	
				}
				
				sort(s,s+n,compare);
				for(ll i=0;i<n;i++)
				cout<<s[i]<<endl;
	return 0;
}
