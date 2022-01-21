//Question Link: https://codeforces.com/contest/1473/problem/B

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
 
string str1, str2, ans1, ans2;
cin>>str1>>str2;
int siz1=str1.length(), siz2=str2.length();
int lcm= (siz2*siz1)/__gcd(siz1, siz2);
// cout<<lcm<<" "<<(lcm/siz1)<<" "<<(lcm/siz2)<<endl;

fo(i, (lcm/siz1)){
  ans1+= str1;
}
fo(i, (lcm/siz2)){
  ans2+= str2;
}
// cout<<str1<<" "<<str2<<endl;
if(ans1== ans2){
  cout<<ans1<<endl;
}
else{
  cout<<-1<<endl;
}
// cout<<str1<<" "<<str2<<endl;



}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}