#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    int a;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        arr[i]=a;
    }
    sort(arr,arr+4);
    cout<<arr[0]*arr[2]<<endl;
    return 0;
}
