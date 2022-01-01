//Question Link: https://codeforces.com/problemset/problem/298/B

//Brute Force


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
   int n, sx, sy, ex, ey;
   cin>>n>>sx>>sy>>ex>>ey;

   string str;
   cin>>str;


/*

sx-ex>0   W 
sx-ex<0   E
sy-ey>0   S
sy-ey<0   N
*/
int nc=0, sc=0, ec=0, wc=0;
   int w= sx-ex;
   int h= sy-ey;
if(h>0){
  sc=h;
}
else if(h<0){
  nc=-h;
}
if(w>0){
  wc=w;
}
else if(w<0){
  ec=-w;
}
    // cout<<nc<<" "<<sc<<" "<<ec<<" "<<wc<<endl;
bool b=0;
   int ans;
  fo(i, n){
    if(str[i]=='N'){
      nc--;
    }
    else if(str[i]=='S'){
      sc--;
    }
    else if(str[i]=='W'){
      wc--;
    }
    else if(str[i]=='E'){
      ec--;
    }
    if(nc<0){
      nc=0;
    }
        if(sc<0){
      sc=0;
    }
        if(wc<0){
      wc=0;
    }
        if(ec<0){
      ec=0;
    }
    if(nc==0 && sc==0 && ec==0 && wc==0){
      b=1;
      ans=i;
      break;
    }

    // cout<<nc<<" "<<sc<<" "<<ec<<" "<<wc<<endl;
  }
  if(b)
cout<<ans+1<<endl;

else
cout<<-1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}