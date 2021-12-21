//Question Link: https://codeforces.com/contest/1619/problem/B

/*Algorithm:

Initially, i was precomputing all the squares till first 5000 numbers and cubes till 500 and storing them in arrays, but this wasn't working.

So what i found after quiting on it is that,  we have to find the square root of number and find the natural numbers less than that, and same for number of cubes less than that we have to find the cuberoot of this number and find the natural numbers which are less than this.
Now add both of them and you will get the numbers, but from this we have to subtract the numbers which are same in square and cube ( like 64 as 64= 4^3 as well as 8^2, so we are counting it twice)
For eg:
if n= 20
calculate  sqrt(20)= 4  (value in int)
           cubrt(20)= 2  (value of int)
           n^1/6= 1
           ans=4+2-1= 5



--> It passed in the contest but someone hacked it and the reason for that was that i was ignoring numbers which are both square cube and n^6  (i.e 64   it is also 2^6)
so from the ans we just have to subtract 1 if the number is (n^1/6 *6).
*/

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define vp(i, a, n) fo(i, n){int x; cin>>x; a.pb(x);}
#define ap(i, a, n) fo(i, n){cin>>a[i];}
 
typedef vector<int> vi;

void solution() {
   int n;
   cin>>n;
   int sq= floor(sqrt(n));
   int cu= floor(cbrt(n));
   int cs = (int)pow(n, 1.0 / 6);
   // cout<<cs+1<<" "<<(int)pow(cs+1, 6)<<endl;
   if((int)pow(cs+1, 6)==n || (int)pow(cs+1, 6)==n-1)
   {
   	cout<<sq+cu-cs-1<<endl;
   }
   else
   {
   	   // cout<<cs<<endl;
   cout<<sq+cu-cs<<endl;
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