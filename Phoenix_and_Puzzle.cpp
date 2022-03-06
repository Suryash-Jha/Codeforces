//Question Link: https://codeforces.com/contest/1515/problem/B
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
set<int> s;
void solution() {
   int n;
   cin>>n;
  if(n%2==1){
    cout<<"NO"<<endl;
  }
  else{

  if(n%2==0 && s.count(n/2)){
    cout<<"YES"<<endl;
   }
   else if(n%4==0 && s.count(n/4)){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
  }

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       // set<int> s;
   for(int i=1; i*i<=(int)1e9; i++){
    s.insert(i*i);
   }
    w(t)
    {
        solution();
    }
   
    return 0;
}