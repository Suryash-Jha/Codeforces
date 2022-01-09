//Question Link: https://codeforces.com/problemset/problem/368/B

//Thought for a very long time for its solution ....and finally after spending about 3 hours...i got the answer..
//Initially, i wasn't able to understand what it is asking..but after reading the name of question...a lottttt of things become clear..
//implementation took just half an hour.....not understanding it in first place took 2;30 :(

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
   int n, t;
   cin>>n>>t;
   vp(i, v, n);
  int arr[n]={0};
  bool visit[100000]={false};
  for(int i=n-1; i>=0; i--){
    if(!visit[v[i]-1]){
      arr[i]+=1;
      visit[v[i]-1]=true;
    }

  }
  for(int i=n-2; i>=0; i--){
    arr[i]+= arr[i+1];
  }
// fo(i, n){
//   cout<<arr[i]<<" ";
// }
  fo(i, t){
    int x;
    cin>>x;
    cout<<arr[x-1]<<endl;
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