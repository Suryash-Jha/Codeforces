//question link: https://codeforces.com/contest/1505/problem/B


/*
Algortihm:

Actually, this question was just messing around. We thought that it needs to output square root of a number, but it wasn't asking for that.
It was asking for a "Digital Root"...i.e. sum all digits of number iteratively till the number gets converted to a 1-digit number.
For Eg:
n=467
(
4+6+7= 17  (Not a single digit number, Hence do this again byt using the output of this step)
1+7= 8     (This is a single digit number, Hence it gets passed.)
)
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
int count_dig(int num)
{int count=0;
	while(num!=0)
	{
		num/=10;
		count++;
	}
	return count;
}
 
void solution() {
 int n;
 cin>>n;
 // int num= sqrt(n);
 // cout<<num; 
 while(count_dig(n)!=1)
 {int temp=0;
 	while(n!=0)
 	{
 		temp+= n%10;
 		n/=10;
 	}
 	n= temp;
 }
 cout<<n;
 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}