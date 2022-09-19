#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a;
        int tampung=0;
        cin>>a;
        int angka=atoi(a.c_str());
        for(int i=0;i<a.length();i++)
        {
            tampung+=(a[i]-'0');
        }
        for(int i=angka;i>=0;i--)
        {
            string huruf;
            ostringstream convert;
            convert << i;
            huruf=convert.str();
            int tampung2=0;
            for(int i=0;i<huruf.length();i++)
            {
                tampung2+=(huruf[i]-'0');
            }
            if(tampung2==(tampung-1))
            {
                cout<<i<<endl;
                break;
            }

        }
    }
    return 0;
}
