//Question Link: https://codeforces.com/problemset/problem/4/C

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
   int n;
   cin>>n;
   map<string, int> m;
   while(n--)
   {
    string s;
    cin>>s;
    if(m.count(s)==0)
    {
    	cout<<"OK"<<endl;
    	m[s]++;

    }
    else
    {
    	cout<<s<<m[s]<<endl;
    	m[s]++;

    }
    
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