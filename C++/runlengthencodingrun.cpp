#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char EnDe;
    string word;
    cin>>EnDe>>word;
    if(EnDe=='E')
    {
        string tampung="";
        int idx=0;
        int indeks=0;
        for(int i=0;i<word.length();i++)
        {
            if(tampung[tampung.length()-1]!=word[i])
            {
                if(idx!=0){
                    cout<<tampung[tampung.length()-1]<<idx;
                    idx=0;
                }
                tampung+=word[i];
                indeks++;
            }


            if(word[i]==tampung[tampung.length()-1])
            {
                idx++;
            }
            else
            {
                //i+=idx;
            }
        }
        cout<<tampung[tampung.length()-1]<<idx<<endl;

    }
    else if(EnDe=='D')
    {
        for(int i=1;i<word.length()-1;i+=2)
        {
            int limit=word[i]-'0';
            for(int k=0;k<limit;k++)
            {
                cout<<word[i-1];
            }

        }
        int limits = word[word.length()-1]-'0';
        for(int i=0;i<limits;i++)
        {
            cout<<word[word.length()-2];
        }
        cout<<endl;
    }
    return 0;
}
