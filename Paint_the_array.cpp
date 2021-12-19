//https://codeforces.com/contest/1618/problem/C

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define vp(i, a, n) fo(i, n){int x; cin>>x; a.pb(x);}
#define ap(i, a, n) fo(i, n){cin>>a[i];}
 
typedef vector<int> vi;
 
 
void solution() {
   int n;
   cin>>n;
   vi v;
   vp(i, v, n);
   int ans1=0, ans2=0;
   for(int i=0; i<n; i+=2)
   {
   	ans1= __gcd(ans1, v[i]);
   }
   for(int i=1; i<n; i+=2)
   {
   	ans2= __gcd(ans2, v[i]);
   }
   bool b1= true, b2=true;
   for(int i=0; i<n; i+=2)
   {
   	if(v[i]%ans2==0)
   		b1=false;
   }
   for(int i=1; i<n; i+=2)
   {
   	if(v[i]%ans1==0)
   		b2= false;
   }
if(b1==0 && b2==0)
{
	cout<<0<<endl;
}
else if(b1==1)
{
	cout<<ans2<<endl;
}
else
{
	cout<<ans1<<endl;
}
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}