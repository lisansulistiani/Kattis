#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stones;
    cin>>stones;
    int W=0,B=0;
    int length=stones.length();
    for(int i=0;i<length;i++)
    {
        if(stones[i]=='W')
        {
            W++;
        }
        else
        {
            B++;
        }
    }

        if(W==B)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    return 0;
}
