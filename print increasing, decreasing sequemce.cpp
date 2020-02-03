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
 		
 		void inc(ll n)
 		{
 			if(n==0)
 			return ;
 			
 			inc(n-1);
 			cout<<n<<" ";
 			
 			
		}
		
		void dec(ll n)
 		{
 			if(n==0)
 			return ;
 			
 			cout<<n<<" ";
 			dec(n-1);
 			
 			
 			
		}



int main() {
	
				fast
			ll n;
			cin>>n;
			inc(n);
			cout<<endl;
			dec(n);
			
	return 0;
}
