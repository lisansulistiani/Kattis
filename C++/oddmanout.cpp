#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int idx=1;
    while(idx<=tc)
    {
        int tc2;
        cin>>tc2;
        int arr[tc2];
        for(int i=0;i<tc2;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+tc2);
        for(int i=0;i<tc2;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                cout<<"Case #"<<idx<<": "<<arr[i]<<endl;
                break;
            }
            else
            {
                i++;
            }
        }
        idx++;
    }
    return 0;
}
