//Question Link: https://codeforces.com/contest/131/problem/A

//MOST WRONG SUBMISSIONS!!!!
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
   string str;
   cin>>str;
   bool b=1;
   for(int i=1; i<str.length(); i++){
        if((int)str[i]>=97){
          b=0;
          break;
        }
   }
   if(str.length()<=1 && (int)str[0]>=97){
    cout<<(char)((int)str[0]-32);
    return;
   }
    else if (str.length()<=1 && (int)str[0]<97){
      cout<<(char)((int)str[0]+32);
      return;
    }
   if(!b){
    cout<<str;
   }
   else{
       if(str[0]>=65 && str[0]<97){
           cout<<char((int)str[0]+32);
       }
       else{
        cout<<(char)((int)str[0]-32);
       }
       for(int i=1; i<str.length(); i++){
        cout<<(char)((int)str[i]+32);
       }

    // cout<<"Hey"<<endl;
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