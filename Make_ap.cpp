//Question Link: 

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
   int a, b, c;
   cin>>a>>b>>c;

   int ba=b-a, cb=c-b, ca=c-a;
   // cout<<((2*b)-c)%a<<" "<<((2*b)-a)%c<<endl<<((2*b)-c)<<" "<<((2*b)-a)<<endl;
   if(a==b && b==c)
    {
    cout<<"YES"<<endl;
    return;
  }
  if(((2*b)-c)%a==0 && ((2*b)-c)>0 /*|| ((2*b)-c)%a==0 && ((2*b)-c)<0*/)
  {
    cout<<"YES"<<endl;
    return;
  }
  if(((2*b)-a)%c==0 && ((2*b)-a)>0 /*|| ((2*b)-a)%c==0 && ((2*b)-a)<0*/)
  {
    cout<<"YES"<<endl;
    return;
  }
  if((a+c)%(2*b)==0)
  {
    cout<<"YES"<<endl;

  }
  else{
    cout<<"NO"<<endl;
    return;
  }
// cout<<endl;


}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}