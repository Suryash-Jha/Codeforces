//Question Link: https://codeforces.com/contest/137/problem/B

/*

Algorithm:
Came with a lot of approaches, but this one striked me better.
So, what i did is that we know that if we delete all the dupliactes and number which are greater than "n", then what we will get is the elements which are present which are forming permutation.
So now we just have to print difference of total numbers and size of vector which we formed using above conditions.
To remove dupliactes i used SETS. 
*/

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

   int n, op=0;
   cin>>n;
   set<int> v;
   fo(i, n)
   {
   	int x;
   	cin>>x;
   	if(x<=n)
   	v.insert(x);
   }
   cout<<n-v.size();
   // cout<<op<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}