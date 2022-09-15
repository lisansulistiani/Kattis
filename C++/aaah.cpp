#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    int maks_a, maks_b;
    cin>>a;
    maks_a=strlen(a);
    cin>>b;
    maks_b=strlen(b);
    if(maks_a>=maks_b)
        cout<<"go"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
