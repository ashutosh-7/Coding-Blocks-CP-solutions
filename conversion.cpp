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
			
			ll convert(string s)
			{
				if(s.size()==0)
				return 0;
				
				ll y=s[s.size()-1]-'0'+convert(s.substr(0,s.size()-1))*10;
				return y;
			}
			
int main() {
				fast
				string s;
				cin>>s;
				cout<<convert(s);
	return 0;
}
