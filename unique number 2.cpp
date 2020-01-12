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
				ll n;
				cin>>n;
				ll arr[n];
				ll temp=0;
				for(ll i=0;i<n;i++)
				{
					cin>>arr[i];
					temp^=arr[i];
				}
				ll bit=0;
				while(temp)
				{
					if(temp&1)
					bit++;
					temp>>=1;
				}
				//cout<<bit<<endl;
				ll f=0,s=0;
				bit--;
				for(ll i=0;i<n;i++)
				{
					if((arr[i]>>bit)&1)
					f^=arr[i];
					else
					s^=arr[i];
				}
				if(f>s)
				swap(f,s);
				cout<<f<<" "<<s<<endl;
				
				
				
				
	return 0;
}
