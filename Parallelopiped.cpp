//Question Link: https://codeforces.com/contest/224/problem/A
/*

Algorithm:

Its a quite basic one but due to some wrong thoughts i haven't understood properly how to proceed and thus it took a lot of my time as i thought to brute force it with 3 nested loops which i know is quite wrong :(

Assume sides of paralleopied to be l, b, h.
Now, 
Area1= l*b;
Area2= b*h;
Area3= h*l;

and thus, l= ((Area1*Area3)/Area2)^(1/2)
.... and so on


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
   int a1, a2, a3;
   cin>>a1>>a2>>a3;

   int x= sqrt((a1*a2)/a3);
   int y= sqrt((a2*a3)/a1);
   int z= sqrt((a3*a1)/a2);

  // int x= __gcd(a1, a2);
  // int y= __gcd(a2, a3);
  // int z= __gcd(a3, a1);
  cout<<4*(x+y+z);
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}