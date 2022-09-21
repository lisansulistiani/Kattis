#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    if(M-N>0)
    {
        if(M-N!=1)
            cout<<"Dr. Chaz will have "<<M-N<<" pieces of chicken left over!"<<endl;
        else
            cout<<"Dr. Chaz will have "<<M-N<<" piece of chicken left over!"<<endl;
    }
    else
    {
        if(N-M!=1)
            cout<<"Dr. Chaz needs "<<N-M<<" more pieces of chicken!"<<endl;
        else
            cout<<"Dr. Chaz needs "<<N-M<<" more piece of chicken!"<<endl;
    }
    return 0;
}
