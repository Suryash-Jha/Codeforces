//Question Link: https://codeforces.com/problemset/problem/919/B

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
   int m=19, k, count=0;
   cin>>k;
   while(true){
    int n=m, sum=0;
      while(n!=0)
      {
        sum+=n%10;
        n/=10;
      }
      if(sum==10) 
        count++;
      if(count== k) 
        break;
      m++;


   }
   cout<<m;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}