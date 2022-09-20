#include<iostream>
using namespace std;
int main()
{
    string bulan;
    int tanggal;
    cin>>bulan>>tanggal;
    if(bulan=="OCT" || bulan=="DEC")
    {
        if(bulan=="OCT" && tanggal==31)
        {
            cout<<"yup"<<endl;
        }
        else if(bulan=="DEC" && tanggal==25)
        {
            cout<<"yup"<<endl;
        }
        else
        {
            cout<<"nope"<<endl;
        }
    }
    else
        cout<<"nope"<<endl;
    return 0;
}
