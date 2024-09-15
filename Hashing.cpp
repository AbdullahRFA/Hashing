#include<bits/stdc++.h>
using namespace std;
#define  ll     long long int
#define     mod         100000007
int main()
{
    ll t;
    cin>>t;
    ll p=t;
ll ara[100000]={0};
map<ll,ll>mp;
    while(t--)
    {
        string s;
        cin>>s;
        ll sz=s.size();
        ll sum=0;
        for(int i=0;i<sz;i++)
        {
            sum=(((sum*10)%mod)+((abs(s[i]-'a'+1))%mod))%mod;
        }
        cout<<sum<<endl;
        if(mp[sum]>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        mp[sum]++;

    }
}
