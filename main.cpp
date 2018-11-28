#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef bitset<15>mask;
#define F first
#define S second
ll n,m,x,y,z,k,sol,sum,ans,l,r,xx,yy,a[1000000],b[1000000],q;
vector<ll>v1;
vector<ll>v2;
pair<ll,pair<ll,ll> >pp[1000000];
pair<ll,ll>p[1000000];
map<ll,ll>ma;
string s1,s2,s;
char c[600][600];
void solve(ll i)
{
a[i]=0;
sum=0;
ans=0;
   for(int j=1;j<=m;j++)
     {
       if(c[i][j]=='0')
       {
         ans=max(sum,ans);
         sum=0;
       }
       else if(j==m)
       {
         if(c[i][j]=='1')
           sum++;
           ans=max(sum,ans);
       }
       else sum++;
     }
     a[i]=ans;
   //  cout<<ans<<"  "<<i<<endl;
}
int main()
{
//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   cin>>n>>m>>q;
   for(int i=1;i<=n;i++)
     for(int g=1;g<=m;g++)
       cin>>c[i][g];
     for(ll g=1;g<=n;g++)
         solve(g);
         for(ll g=1;g<=n;g++)
            // cout<<a[g]<<" ";
     for(int i=0;i<q;i++)
     {
     cin>>x>>y;
     if(c[x][y]=='1')c[x][y]='0';
     else c[x][y]='1';
     sum=0;
     ans=0;
     solve(x);
     ans=0;
     for(int j=1;j<=n;j++)
       {
         ans=max(ans,a[j]);
       }
     cout<<ans<<endl;
     }



    return 0;
}
