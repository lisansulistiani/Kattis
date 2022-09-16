#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P,K,N;
    cin>>P;
    while(P--)
    {
        cin>>K>>N;
        cout<<K<<" ";
        int sum=0;
        for(int i=0;i<=N;i++)
        {
            sum+=i;
        }
        cout<<(sum)+N<<endl;
    }
    return 0;
}

