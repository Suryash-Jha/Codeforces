//Question Link: https://codeforces.com/contest/1626/problem/B

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

void solution() {
  string v;
  cin>> v;
  int ind;
  reverse(v.begin(), v.end());
     int maxm= INT_MIN;
   bool b=0;
   fo(i, v.length()-1){
     int sum= (v[i]- '0') + (v[i+1]- '0');
     if(sum>=10){
      maxm= sum;
      ind= i;
      b=1;
      break;
     }
   }

   if(!b){
// reverse(v.begin(), v.end());

    fo(i, v.length()-1){
     int sum= (v[i]- '0') + (v[i+1]- '0');
     maxm= sum;
      ind=i;

     }
     
   }
reverse(v.begin(), v.end());
for(int i=0; i<v.length(); i++){
  if(i== v.length()-ind-2){
    cout<<maxm;
    continue;
  }
  if(i== v.length()-ind-1){
    continue;
  }
cout<<v[i];
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

/*

  int n, ind;
   cin>>n;
   vi v;
   while(n!=0){
    v.pb(n%10);
    n/=10;
   }
   // reverse(v.begin(), v.end());
   int maxm= INT_MIN;
   bool b=0;
   fo(i, v.size()-1){
     int sum= v[i] + v[i+1];
     if(sum>=10){
      maxm= sum;
      ind= i;
      b=1;
      break;
     }
   }

   if(!b){
// reverse(v.begin(), v.end());

    fo(i, v.size()-1){
     int sum= v[i] + v[i+1];
     maxm= sum;
      ind=i;

     }
     
   }
reverse(v.begin(), v.end());
for(int i=0; i<v.size(); i++){
  if(i== v.size()-ind-2){
    cout<<maxm;
    continue;
  }
  if(i== v.size()-ind-1){
    continue;
  }
cout<<v[i];
}
cout<<endl;

*/