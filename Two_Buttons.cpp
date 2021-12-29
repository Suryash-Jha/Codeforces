//Question Link: https://codeforces.com/problemset/problem/520/B

//Must watch this video: https://youtu.be/_IDe4l7rhzM

//At first i was unable to get how should i start so after half an hour i tried to see any method on youtube and when he said it will use graph...i was thinking to quit as i haven't studied graph yet.
//But man!!!!!!!! his 2nd solution is so perfect!!!! 

//Definitely i will try to resolve it after some time, by using the graph method.... 

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
int n, m;
cin>>n>>m;

int count=0;
while(true)
{
  if(m>n && m%2==0)
  {
    m/= 2;
    count++;

  }
  else if(m>n && m%2!=0)
  {
    m+=1;
    m/=2;
    count+=2;
  }
  else if(m<n)
  {
    m+=1;
    count++;
  }

  if(m==n) break;

}
cout<<count;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}