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
    string s;
    while(t--)
    {
    cin>>s;
    ll res=hashing(s);
    reverse(s.begin(),s.end());
    ll res1=hashing(s);
    if(res==res1)cout<<"Pallindrom"<<endl;
    else cout<<"Not Pallindrom"<<endl;
    }
}



