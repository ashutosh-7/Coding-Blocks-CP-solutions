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
			priority_queue<ll> q;
			for(ll i=0;i<n;i++)
			{
				ll x;
				cin>>x;
				if(x==1)
				{
					ll a,b;
					cin>>a>>b;
					ll dis=a*a+b*b;
					if(q.size()<k )
					
						q.push(dis);
					else if(q.top()>dis){
					
					q.pop();
					q.push(dis);}
					
				}
				else
				{
				
					cout<<q.top()<<endl;;
					
				}
			}
	return 0;
}
