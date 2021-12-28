//Question Link: https://codeforces.com/problemset/problem/445/A

/*
Algorithm:

Initially, i was trying to set all of the "." to 'B' and then if two 'B's are adjacent then i was replacing next adjacent 'B' to 'W'.
But it was giving wrong output on even sized matrix(2x2, 4x4).

Then, this way of solving striked me that if i prepare a matrix which have no adjacent B and W then there is no condition to check that '_ ' have adjacent elements or not.
Hence i started putting 'B' on i+j is even.
and 'W' on the place where i+j is odd.
(if there was '.' present on that index)


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
   int n, m;
   cin>>n>>m;
   char mat[n][m];
   fo(i, n)
   {
    fo(j, m)
    {
      cin>>mat[i][j];
      if(mat[i][j]=='.' && (i+j)%2==0)
      {
        mat[i][j]='B';
      }
      else if(mat[i][j]=='.' && (i+j)%2!=0)
      {
        mat[i][j]='W';
      }

    }
   }   
   fo(i, n){
    fo(j, m)
    {
            cout<<mat[i][j];

    }
    cout<<endl;
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