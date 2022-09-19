#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int panjang;
    panjang = a.length();
    int position=1;
    for (int i=0;i<panjang;i++)
    {
        if(a[i]=='A')
        {
            if(position==1)
            {
                position=2;
            }
            else if(position==2)
            {
                position=1;
            }
        }
        else if(a[i]=='B')
        {
            if(position==2)
            {
                position=3;
            }
            else if(position==3)
            {
                position=2;
            }
        }
        else if(a[i]=='C')
        {
            if(position==1)
            {
                position=3;
            }
            else if(position==3)
            {
                position=1;
            }
        }
    }
    cout<<position<<endl;
    return 0;
}