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
				string a,b;
				ll t;
				cin>>t;
				while(t--)
				{
				
				cin>>a>>b;
				for(ll i=0;i<a.size();i++)
				{
					if(a[i]!=b[i])
					cout<<1;
					else
					cout<<0;
				}
				cout<<endl;
			}
				
	return 0;
}
