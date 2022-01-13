//Question Link: https://codeforces.com/problemset/problem/500/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int v[n];
    vector<int>ans;
    bool b=0;
    for(int i=1;i<=n-1; i++){
      cin>>v[i];
    }
    // cout<<v[0]<<endl;
    for(int i=1; i<n; i++){
        // cout<<v[i]<<" ";
        v[i]= v[i]+i;
    }
        for(int i=1; i<n;){
            // cout<<i<<endl;
            i= v[i];
            ans.push_back(i);
        // cout<<v[i]<<" ";
        // v[i]= v[i]+i;
    }
    for(int i=0; i<ans.size(); i++)
    // cout<<ans[i]<<" ";
    {
        if(ans[i]== k)
        //   {cout<<"YES"<<endl;
        {
            
          b=1;
          break;}
          
    }
    if(b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
    
}
