//https://codeforces.com/contest/604/problem/A


//I know its way too easyyyy....but i Did it just for the sake of completing first 50 questions on codeforces.....

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
   vp(i, m, 5);
   vp(i, w, 5);
   vp(i, h, 2);
   int score=0;
   fo(i, 5)
   {float val1= (3*500*(i+1))/10.0;
    float val2= ((250- m[i])*2*(i+1)) -(50*w[i]);
     score+= (max(val1, val2));
     // cout<<score<<endl;
   }
score+= h[0]*100;
score-= h[1]*50;
cout<<score;
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}