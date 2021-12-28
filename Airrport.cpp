//Question Link: https://codeforces.com/problemset/problem/218/B


//Brute force code


/*

Algorithm:

for maxm, i just sorted the array every time and added the last element into the variable and subtracted 1 from it.
for minm, i sorted array only a single time and added the first elemnt to variable and subtracted 1 from it.
if(the first element of array becomes zero then i removed that from the array.)

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
   int n, k, n1;
   cin>>n>>k;
   n1=n;
   int maxm=0, minm=0;
   vi temp;
   vp(i, v, k);
   fo(i, k)
   {
    temp.pb(v[i]);
   }
   while(n--)
   {
   	sort(v.begin(), v.end());
    // cout<<endl;
   	maxm+= v[v.size()-1];
   	v[v.size()-1]--;

    // cout<<m<<endl;


   }
   sort(temp.begin(), temp.end());
   while(n1--)
   {
    minm+=temp[0];
    temp[0]--;
    if(temp[0]==0)
    {
      temp.erase(temp.begin());
    }
   }
   
   cout<<maxm<<" "<<minm;
   
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}