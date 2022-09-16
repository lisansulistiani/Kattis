#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[10000];
    int karakter;
    while(cin>>a)
    {
        karakter=strlen(a);
        for (int i=0;i<karakter;i++)
        {
            if(a[i]!=a[i+1])
                cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
