#include<iostream>
#include<string>
#include<stdlib.h>
#include<cmath>
using namespace std;
const int power(int bil, int pangkat1)
{
    return pangkat1==0 ? 1 : bil * power(bil,pangkat1-1);
}
int main()
{
    int kasus, panjang,pangkat1,bil,perpangkatan;
    string angka, pangkat,bilangan;
    int total=0;
    cin>>kasus;
    while(kasus--)
    {
        cin>>angka;
        panjang=angka.length();
        pangkat=angka[panjang-1];
        pangkat1=atoi(pangkat.c_str());
        bilangan=angka.substr(0,(panjang-1));
        bil=atoi(bilangan.c_str());
        perpangkatan = power(bil,pangkat1);
        total+=perpangkatan;
    }
    cout<<total<<endl;
    return 0;
}
