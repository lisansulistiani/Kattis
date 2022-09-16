#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int room,booked;
    cin>>room>>booked;
    int arr[booked];
    int boolean[room+1];
    for(int i=0;i<booked;i++)
    {
        cin>>arr[i];
        boolean[arr[i]]=1;
    }

    for(int i=1;i<room+1;i++)
    {
        if(boolean[i]!=1)
            boolean[i]=0;
    }
    int trues=1;
    int a=0;
    for(int i=1;i<room+1;i++)
    {
        if(boolean[i]!=1)
        {
            trues=0;
            cout<<i<<endl;
            break;
        }
    }
    if(trues==1)
        cout<<"too late"<<endl;

    return 0;
}
