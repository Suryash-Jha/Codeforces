//https://codeforces.com/contest/139/problem/A

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
int tot, count=0;
cin>>tot;
vi v;
vp(i, v, 7);
int i=0;
while(count<tot)
{if(i>6)
	{
      i=0;
	}
	else
	{
		  count+=v[i];
  		  i++;
	}
	// cout<<i<<endl;
 
 
}
cout<<i<<endl;
 
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}