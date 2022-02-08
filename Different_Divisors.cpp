//Question Link: https://codeforces.com/contest/1474/problem/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //*find_by_order(val);   order_of_key(val);


bool is_prime(int n)
{
  bool b=1;
   for(int i=2; i<=sqrt(n); i++){
      if(n%i==0){
        b=0;
        break;
      }
   } 
   return b;
}

void solution() {
   int n, var1, var2;
   cin>>n;
   for(int i=1+n; i<1000000000; i++){
    if(is_prime(i))
   { 
     var1= i;
    break;
  }
   }
   for(int i= var1+n; i<1000000000; i++){
  if(is_prime(i))
   { 
     var2= i;
    break;
  }
   }
   cout<<var2*var1<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}