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
			    string s1,s2;
			    ll index=0;
				getline(cin,s1);
				getline(cin,s2);
				if(s1.size()<s2.size())
				{
				cout<<"No string";
				return 0;
		        }
			map<char,ll> id,hash;
			string test="";
			for (ll i=0;i<s2.size();i++)
			{
				id[s2[i]]++;
			}

		
			ll ans=LLONG_MAX;
			ll def=0;
			ll count=0;
		
			ll start=0;
			for(ll i=0;i<s1.size();i++)
			{
				hash[s1[i]]++;
				if(id[s1[i]]!=0 and hash[s1[i]]<=id[s1[i]])
				{
				count++;
			    }
				
				if(count==s2.size())
				{
				//	count=0;
				//	cout<<"sjzh";
					while(hash[s1[start]]>id[s1[start]] or id[s1[start]]==0)
					{
						if(hash[s1[start]]>id[s1[start]] )
						{
							hash[s1[start]]--;
						}
						start++;
					}
					ll temp=i-start+1;
						if(ans>temp)
					{
						ans=temp;
						def=start;
					}
		
				}
//				else
//				ans=0;
			}
			//cout<<ans;
			if(ans!=LLONG_MAX)
			cout<<s1.substr(def,ans);
			else
			cout<<"No string";
				
				
	return 0;
}
