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
		ll fib(ll n)
		{
			if(n==1 or n==2)
			return 1;
			
			ll ans=fib(n-1)+fib(n-2);
			cout<<ans<<" ";
			return ans;
		}



int main() {
				fast
			ll n;
			cin>>n;
			cout<<fib(n);
	return 0;
}
