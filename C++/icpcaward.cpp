#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int tc;
    cin>>tc;
    string input[tc], output[tc];
    string s,out;
    stringstream ss;
    getline(cin,s);
    ss<<s;
    int x;
    while(ss>>out)
    {
        stringstream convert(out);
        convert>>x;
        cout<<x<<endl;
    }
    for(int i=0;i<tc;i++)
    {
        getline(cin,input[i]);

    }
    int idx=0;
    for(int i=0;i<tc;i++)
    {
        int trues=0;
        std::string s = input[i];
        std::string delimiter = " ";
        std::string token = s.substr(0, s.find(delimiter));
        for(int k=0;k<idx;k++)
        {
            std::string ss = output[k];
            std::string tokens = ss.substr(0, s.find(delimiter));
            if(token==tokens)
            {
                trues=1;
            }
        }
        if(trues==0)
        {
            output[idx]=input[i];
            idx++;
        }
    }
    for (int i=0;i<12;i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}
