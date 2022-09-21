#include<iostream>
using namespace std;
int main()
{
    int a,b,c,hasil=0,indeks=0;
    cin>>a>>b;
    while(a--)
    {
        cin>>c;
        hasil+=c;
        if(hasil<=b)
        {
            indeks+=1;
        }


    }
    cout<<indeks<<endl;

    return 0;
}