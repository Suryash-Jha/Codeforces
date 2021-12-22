//Question link: https://codeforces.com/problemset/problem/242/B
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
 vi v1, v2;
 bool b=0;
 for(int i=0; i<n; i++)
 {
 	int x, y;
 	cin>>x>>y;
 	v1.pb(x);
 	v2.pb(y);

 }  
 int maxm= *max_element(v2.begin(), v2.end());
 int minm= *min_element(v1.begin(), v1.end());
 // cout<<maxm<<" "<<minm<<endl;
 for(int i=0; i<n; i++)
 {
 	if(v1[i]==minm && v2[i]==maxm)
 	{   b=1;
 		cout<<i+1<<endl;
 		break;
 	}
 }
 if(!b)
 {
 	cout<<-1<<endl;
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