#include<iostream>
#include<bits/stdc++.h>
unsigned long long a,b, c;
using namespace std;
int main()
{
    while(cin>>a>>b)
    {
        if(a>b)
        {
            c=a-b;
        }
        else
        {
            c=b-a;
        }
        cout<<c<<endl;
    }
    return 0;
}
