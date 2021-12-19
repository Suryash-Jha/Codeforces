//https://codeforces.com/contest/1611/problem/A

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define br cout<<"\n";
 
typedef vector<int> vi;
 
 
void solution() {
   string n;
   cin>>n;
   if(n[n.length()-1]%2== 0)
   {
   	cout<<"0"<<endl;
   }
   else if(n[0]%2== 0)
   {
   	cout<<"1"<<endl;
   }
   else 
   {
   	fo(i, n.length())
   	{if(i<n.length()-1){
 
   		if(n[i]%2==0)
   		{
   			cout<<"2"<<endl;
   			break;
   		}
   	}
   		else 
   		{
   			cout<<"-1"<<endl;
   		}
 
 
   	}
   
 
 
 
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