#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll r,c;
				cin>>r>>c;
				ll arr[r][c];
				for(ll i=0;i<r;i++)
				{
					for(ll j=0;j<c;j++)
					cin>>arr[i][j];
				}
				ll r1=0,c1=0;
				ll count=0;
				ll x=r*c;
				while(r1<r && c1<c)
				{
					if(count==x)
					break;
					// first col
					for(ll i=r1;i<r;i++)
					{
						cout<<arr[i][c1]<<", ";
						count++;
					}
					c1++;
					//c--;
					if(count==x)
					break;
					//last row
					for(ll i=c1;i<c;i++)
					{
						cout<<arr[r-1][i]<<", ";
						count++;
					}
					r--;
					if(count==x)
					break;
					//last column
					if(r1<r && c1<c)
					{
						for(ll i=r-1;i>=r1;i--)
						{
							cout<<arr[i][c-1]<<", ";
							count++;
						}
						c--;
					}
					//first row
					if(r1<r && c1<c)
					{
						for(ll i=c-1;i>=c1;i--)
						{
							cout<<arr[r1][i]<<", ";
							count++;
						}
						r1++;
					}
					
				}
				cout<<"END";
	return 0;
}
