//Question Link: https://codeforces.com/problemset/problem/584/A



//did a lot of wrong submissions on this one :(
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define vp(i, a, n) vi a; fo(i, n){int x; cin>>x; a.pb(x);}
#define ap(i, a, n) fo(i, n){cin>>a[i];}
 
typedef vector<int> vi;
 
 
void solution() {
   int d, n;
   cin>>d>>n;
 
   if(d==1 && n==10)
   {
   	cout<<-1<<endl;
   	return;
   }
   if(n==10)
   {
   	vi v;
   fo(i, d-1)
   {
   	v.pb(1);
   }
    v.pb(0);
   fo(i, d)
   {
   	cout<<v[i];
   }
   return;
}
   	vi v;
   fo(i, d)
   {
   	v.pb(n);
   }
 
   fo(i, d)
   {
   	cout<<v[i];
   }
 
 
   
 
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}
