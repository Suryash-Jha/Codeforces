//Question Link: https://codeforces.com/contest/433/problem/B

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
	int n, q;
	cin>>n;

   int arr[n+1]={0}, brr[n+1]={0}, crr[n+1]={0};
   for(int i=1; i<=n; i++)
   {
   	cin>>arr[i];
   		 	brr[i]=brr[i-1]+arr[i];
   }

    sort(arr, arr+n+1);
      for(int i=1; i<=n; i++)
   {

   		 	crr[i]=crr[i-1]+arr[i];
    }
cin>>q;
// deba(i, brr, n+1);
// cout<<endl;
// deba(i, crr, n+1);
// cout<<endl;

while(q--)
{int x, a, b;
	cin>>x>>a>>b;

	if(x==1)
	{
		cout<<brr[b]- brr[a-1]<<endl;
	}
	else
	{
		cout<<crr[b]- crr[a-1]<<endl;
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