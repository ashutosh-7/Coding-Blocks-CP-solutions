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
				ll n;
				cin>>n;
				ll max=-100000000000;
				ll *arr=new ll[n];
				for(ll i=0;i<n;i++)
				{
				cin>>arr[i];
				if(arr[i]>max)
				max=arr[i];
				}
				cout<<max;
				
	return 0;
}
