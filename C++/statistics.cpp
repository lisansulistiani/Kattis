#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int idx=1;
    while(idx<=10)
    {
        int tc;
        cin>>tc;
        if(cin.eof())
            break;
        long int arr[tc];
        for(int i=0;i<tc;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+tc);
        cout<<"Case "<<idx<<": "<<arr[0]<<" "<<arr[tc-1]<<" "<<arr[tc-1]-arr[0]<<endl;
        idx++;
    }
    return 0;
}
