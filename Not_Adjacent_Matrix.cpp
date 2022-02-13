//Question Link: https://codeforces.com/problemset/problem/1520/C

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
   int n;
   cin>>n;
   if(n==1){
    cout<<1<<endl;
   }
   else if(n==2){
    cout<<-1<<endl;
   }
   else{
    vi ev, od;
    if(n%2==0){
     fo(i, n*n){
       if((i+1)%2==0) ev.pb(i+1);
       else od.pb(i+1);
      }
      int count=0;
      fo(i, ev.size()){
       cout<<ev[i]<<" ";
       count++;
       if(count==n)
        {
          cout<<endl;
       count=0;
     }
      }
      count=0;
      fo(i, od.size()){
       cout<<od[i]<<" ";
       count++;
       if(count==n)
        {
          cout<<endl;
       count=0;
     }
      }

    }
    else{
         fo(i, n*n){
       if((i+1)%2==0) ev.pb(i+1);
       else od.pb(i+1);
      }
      int count=0;
      fo(i, ev.size()){
       cout<<ev[i]<<" ";
       count++;
       if(count==n)
        {
          cout<<endl;
       count=0;
     }
      }
      // count=0;
      fo(i, od.size()){
       cout<<od[i]<<" ";
       count++;
       if(count==n)
        {
          cout<<endl;
       count=0;
     }
      }
    }
   }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}