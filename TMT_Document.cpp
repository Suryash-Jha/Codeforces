//Question Link: https://codeforces.com/contest/1509/problem/B

/*

Literally!!!! whole day got wasted on it.
Algorithm:

We just have to check 2 things:
1.) that count of "T" should be equal to 2*"M".
2.) there should be more "T" then "M" both while traversing forward as well as backward.




*/

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
   int n, t=0, m=0;
   cin>>n;
   string s;
   cin>>s;
   bool b=1;
   fo(i, n){
    if(s[i]=='T')t++;
    else m++;
   }
   if(t!=(2*m)){
    b=0;
   }
   else{
    int count=0;
      fo(i, n){
          if(s[i]=='T')count++;
          else {count--;
          if(count<0){
            b=0;
          }}

      }

      if(b){
        int count=0;
        reverse(s.begin(), s.end());
         fo(i, n){
          if(s[i]=='T')count++;
          else {count--;
          if(count<0){
            b=0;
          }}

      }
   }
}
   if(b){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}