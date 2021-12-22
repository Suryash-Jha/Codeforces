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

string repeat(string s, int n)
{
    // Copying given string to temporary string.
    string s1 = s;
 
    for (int i=1; i<n;i++)
        s += s1; // Concatenating strings
 
    return s;
}
void solution() {
   int k;
   cin>>k;
   map<char, int> m;
   bool b=0;
   string str, s;
   cin>>str;
   fo(i, str.length())
   {
   	m[str[i]]++;
   }
   for(auto it: m)
   {

   	if(it.second%k!=0)
   	{ b=1;
      cout<<-1<<endl;
      break;
   	}
   }
   if(!b){
      for(auto it: m)
   			{
   		fo(i, it.second/k)
   		{  
   			 
   			s.pb(it.first);
   		    }
   		}
   		
   		cout<<repeat(s, k);
   	
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