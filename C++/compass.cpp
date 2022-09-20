#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int awal,akhir;
    cin>>awal>>akhir;
    int hitung1,hitung2;
    hitung1=((akhir-awal+720)%360);
    hitung2=(-1)*((awal-akhir+720)%360);
    if(abs(hitung1)==180)
    {
        cout<<180<<endl;
    }
    else if(abs(hitung1)<abs(hitung2))
    {
        cout<<hitung1<<endl;
    }
    else
    {
        cout<<hitung2<<endl;
    }
    return 0;
}
