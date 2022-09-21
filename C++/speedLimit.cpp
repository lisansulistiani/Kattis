#include<iostream>
using namespace std;
int main()
{
    int kasus, kecepatan, waktu,selisih=0, jarak=0,jarakk=0,selisih1;
    cin>>kasus;
    while(kasus!=-1)
    {
        selisih=0;
        jarak=0;
        jarakk=0;
        selisih1=0;
        while(kasus--)
        {
            cin>>kecepatan>>waktu;
            selisih=waktu-selisih1;
            jarak=kecepatan*selisih;
            jarakk+=jarak;
            selisih1=waktu;
        }
        cout<<jarakk<<" miles"<<endl;
        cin>>kasus;
    }

    return 0;
}
