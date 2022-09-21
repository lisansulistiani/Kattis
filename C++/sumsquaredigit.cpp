#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int k, b, n;
        int ans=0;
        cin>>k>>b>>n;
        while(n>0)
        {
            ans+=(n%b)*(n%b);
            n=(n/b);
        }
        cout<<k<<" "<<ans<<endl;
    }
    return 0;
}
