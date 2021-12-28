//Question Link: https://codeforces.com/problemset/problem/433/A

//I just hate questions which sound so easy at first that i don't even bother analyze it properly and accumulate a lot of wrong submissions over themselves. :(

#include<bits/stdc++.h>
using namespace std;

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


void solution() {
   int n;
   cin>>n;

   int count100=0, count200=0;
   fo(i, n){
    int x;
    cin>>x;
    if(x==100)
    {
      count100++;
    }
    else
    {
      count200++;
    }
   }
   if(count100%2==0 && count100==0)
   {
      if(count200%2==0)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
   }
  else if(count100%2==0 && count100!=0){
       cout<<"YES"<<endl;
  }
   else
   {
    cout<<"NO"<<endl;
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