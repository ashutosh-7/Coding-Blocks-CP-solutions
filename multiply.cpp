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
			ll mul(ll x,ll y)
			{
				if(y==0)
				return 0;
				if(y==1)
				return x;
				ll sum=x+mul(x,y-1);
				return sum;
			}

int main() {
				fast
			ll x,y;
			cin>>x>>y;
			if(y<0)
			swap(x,y);
			if(x<0 and y<0)
			{
				x=-x;
				y=-y;
			}
			cout<<mul(x,y);
	return 0;
}
