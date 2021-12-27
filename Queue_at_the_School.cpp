//QQuestion Link: https://codeforces.com/contest/266/problem/B

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
   int n, k;
   cin>>n>>k;
   string str;
   cin>>str;
   while(k--)
   	{
   		fo(i, n)
   		{
   			if(str[i]=='B' && str[i+1]=='G')
   			{
   				swap(str[i], str[i+1]);
   				i++;
   			}
   		}

   	}
   	cout<<str;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}