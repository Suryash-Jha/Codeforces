//Question Link: https://codeforces.com/contest/43/problem/B

// 140014486	Practice:
// TheConqueror99	43B - 5	GNU C++14	Accepted	30 ms	148 KB	2021-12-20 17:08:37	2021-12-20 17:08:39
  

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
   string s1, s2;
   bool b=1;
   getline(cin, s1);
   getline(cin, s2);
   map<char, int> m1;
   for(int i=65; i<=90; i++)
   {
   	m1[(char)i]=0;
   }
    for(int i=97; i<=122; i++)
   {
   	m1[(char)i]=0;
   }
 
   fo(i, s1.length())
   {if(s1[i]==32)
   	continue;
     m1[s1[i]]++;
   }
   fo(i, s2.length())
   {if(s2[i]==32)
   	continue;
 
   	auto it= m1.find(s2[i]);
   	if(it->second==0)
   	{b=0;
   		break;
   	}
    it->second--;
   	// cout<<it->first<<" "<<it->second<<endl;
   }
   if(!b)
   {
    cout<<"NO"<<endl;
   }
   else
   	{
      cout<<"YES"<<endl;
   	}
   // cout<<s1<<endl<<s2;
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}