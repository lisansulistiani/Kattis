#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    int hasil=(arr[2]-arr[1]);
    int hasil2 = (arr[1]-arr[0]);
    cout<<max(hasil,hasil2)-1<<endl;
    return 0;
}
