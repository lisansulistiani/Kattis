#include<iostream>
#include<cmath>
using namespace std;
const int power(int bil, int pangkat1)
{
    return pangkat1==0 ? 1 : bil * power(bil,pangkat1-1);
}
int hitungDigit(int N)
{
    int counter=0;
    for (int a=N;a>0;a=a/10)
    {
        counter++;
    }
    return counter;
}
int hitungJumlahDigit(int nilai,int counter)
{
    int zeros,result,hasil=0;
    while(nilai>0)
    {
        zeros=power(10,counter-1);
        result=nilai/zeros;
        nilai=nilai%zeros;
        counter--;
        hasil+=result;
    }
    return hasil;
}
int main()
{
    int N,p;
    cin>>N;
    while(N!=0)
    {
        for (int i=11;i<=100000;i++)
        {
            int counter,nilai,multi=0,countt,hasil,hasil1,multi2;
            counter=hitungDigit(N);
            nilai=N;
            hasil=hitungJumlahDigit(nilai,counter);
            multi=N*i;
            countt=hitungDigit(multi);
            multi2=multi;
            hasil1=hitungJumlahDigit(multi2,countt);
            if(hasil==hasil1)
            {
                cout<<i<<endl;
                break;
            }
        }
        cin>>N;
    }
}
