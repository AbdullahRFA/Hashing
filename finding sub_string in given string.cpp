#include<bits/stdc++.h>
using namespace std;
#define  ll     long long int
#define     mod         100000007
ll hashing(string s)
{
    ll sum=0;
    for(int k=0; k<s.size(); k++)
    {
        sum=(((sum*10)%mod)+((abs(s[k]-48))%mod))%mod;
    }
    return sum;
}
int main()
{
    ll t;
    cin>>t;
    ll p=t;
    map<ll,ll>mp;
    string s,s1;
    cin>>s>>s1;
    ll sz=s.size();
    ll ara[sz];
    ara[0]=1;
    for(int i=1; i<sz; i++)ara[i]=(ara[i-1]*10)%mod;
//    for(int i=0; i<sz; i++)cout<<ara[i]<<" ";
//    cout<<endl;
    ll res=hashing(s);
    cout<<res<<endl;
    ll temp;
    while(t--)
    {
        ll i,j;
        cin>>i>>j;
        temp=res;
        ll rem=temp/ara[sz-j];
        ll ans=(rem%ara[j-i+1]);
        cout<<ans<<endl;


    }
}


