#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string spam;
    cin>>spam;
    float whitespace=0;
    float lowercases=0;
    float uppercases=0;
    float symbols=0;
    for(int i=0;i<spam.length();i++)
    {
        if(spam[i]==95)
        {
            whitespace++;
        }
        else if(spam[i]>96 && spam[i]<123)
        {
            lowercases++;
        }
        else if(spam[i]>64 && spam[i]<91)
        {
            uppercases++;
        }
        else
            symbols++;
    }
    cout<<whitespace/spam.length()<<endl<<lowercases/spam.length()<<endl<<uppercases/spam.length()<<endl<<symbols/spam.length()<<endl;
    return 0;
}
