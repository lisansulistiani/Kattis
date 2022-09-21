#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        float a,b;
        float c;
        cin>>a>>b>>c;

        if(((a+b)==c) || (a*b)==c || (a-b)==c || (b-a)==c || (a/b)==c ||(b/a)==c )
        {
            cout<<"Possible"<<endl;
        }
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}
