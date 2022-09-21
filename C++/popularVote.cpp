#include<iostream>
using namespace std;
int main()
{
    int kasusBesar,kasus;
    unsigned long long int total,maks,minimal,indeks,i;
    cin>>kasusBesar;
    while(kasusBesar--)
    {
        cin>>kasus;
        int voter[kasus];
        total=0;
        maks=0;
        minimal=0;
        indeks=0;
        i=1;
        while(i<=kasus)
        {
            cin>>voter[i];
            if(maks<voter[i])
            {
                minimal=maks;
                maks=voter[i];
                indeks=i;
            }
            else if(minimal<voter[i])
            {
                minimal=voter[i];
            }
            total+=voter[i];
            i+=1;
        }
        if(maks==minimal)
        {
            cout<<"no winner"<<endl;
        }
        else
        {
            if(total-maks<maks)
            {
                cout<<"majority winner "<<indeks<<endl;
            }
            else
            {
                cout<<"minority winner "<<indeks<<endl;
            }
        }
    }
    return 0;
}
