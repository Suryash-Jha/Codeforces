//Question Link: https://codeforces.com/problemset/problem/1562/B

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

bool isprime(int n){
for(int i=2; i*i<=n; i++){
  if(n%i==0) return 0;
}
return 1;
}
void solution() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   fo(i, n){
    if(((s[i]-'0')%2==0 && s[i]-'0'>2) || s[i]=='1'){
      cout<<"1"<<endl;
      cout<<s[i]<<endl;
      return;
    }
   }
   for(int i=0; i<n; i++){
     if(!isprime(s[i]-'0'))
   {

      cout<<1<<"\n"<<s[i]<<endl;
    return;
  }

   }
   for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      int num= 10*(s[i]-'0')+ (s[j]-'0');
      if(!isprime(num))
           {

      cout<<2<<"\n"<<num<<endl;
    return;
  }
    }
   }

      for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){

       int num= 100*(s[i]-'0')+ 10*(s[j]-'0')+ (s[k]-'0');
      if(!isprime(num))
           {

      cout<<3<<"\n"<<num<<endl;
    return;
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