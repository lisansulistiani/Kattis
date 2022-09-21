#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int shop;
        cin>>shop;
        int distance[shop];
        for(int i=0;i<shop;i++)
        {
            cin>>distance[i];
        }
        sort(distance,distance+shop);
        cout<<(distance[shop-1]-distance[0])*2<<endl;
    }
    return 0;
}
