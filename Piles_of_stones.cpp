#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    int count1=0, count2=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
        count1+= arr1[i];
    }
     for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
        count2+= arr2[i];
    }
    if(count2> count1){
        cout<<"No"<<endl;
    }
    
    else
    cout<<"Yes"<<endl;
}