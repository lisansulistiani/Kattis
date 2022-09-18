#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char tulisan[1000];
    int karakter,a=0;
    while(cin>>tulisan)
    {
        karakter=strlen(tulisan);
        a=0;
        for (int i=0;i<karakter;i+=3)
        {
            if(tulisan[i]!='P')
            {
                a+=1;
            }
            if(tulisan[i+1]!='E')
            {
                a+=1;
            }
            if(tulisan[i+2]!='R')
            {
                a+=1;
            }


        }
        cout<<a<<endl;
    }

    return 0;
}