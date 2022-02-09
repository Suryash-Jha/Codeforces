//Question Link: https://codeforces.com/contest/1530/problem/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


// #define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define vp(i, a, n) vi a; fo(i, n){int x; cin>>x; a.pb(x);}
#define ap(i, a, n) fo(i, n){cin>>a[i];}

typedef vector<int> vi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //*find_by_order(val);   order_of_key(val);

void solution() {
   int n, m;
   cin>>n>>m;
   int mat[n+2][m+2]={0};

   for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
    if(i==1){
      if(j%2!=0){
        mat[i][j]=1;
      }
    }

    else if(i==n){
      if(j%2!=0){
        mat[i][j]=1;
      }
    }
    else if(i%2!=0 && i<n-1 && i>1){
      mat[i][1]=1;
      mat[i][m]=1;
    }
   }
   }

   for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      cout<<mat[i][j];
    }
    cout<<endl;
   }
   cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}