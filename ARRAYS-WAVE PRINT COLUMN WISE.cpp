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
			ll row,n;
			cin>>row>>n;
			ll **arr=new ll*[row];
			for(ll i=0;i<row;i++)
			{
				arr[i]=new ll[n];
			}
			for(ll i=0;i<row;i++)
			{
				for(ll j=0;j<n;j++)
				cin>>arr[i][j];
			}
			//swap(n,row);
			for(ll i=0;i<n;i++)
			{
				if(i%2==0)
				{
				for(ll j=0;j<row;j++)
				{
					cout<<arr[j][i]<<", ";
				}
			}
			else
			{
				for(ll k=row-1;k>=0;k--)
				cout<<arr[k][i]<<", ";
			}
			
			}
			cout<<"END";
	return 0;
}
