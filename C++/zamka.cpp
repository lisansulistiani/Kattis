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
    long int L,D,X;
    cin>>L>>D>>X;
    long int minimal,maksimal;
    minimal=D+1;
    maksimal=L-1;
    for (int i=L;i<=D;i++)
    {
        long int counter,nilai,hasil;
        counter=hitungDigit(i);
        nilai=i;
        hasil=hitungJumlahDigit(nilai,counter);
        if(hasil==X)
        {
            if(i<minimal)
            {
                minimal=i;
            }
            if(i>maksimal)
            {
                maksimal=i;
            }
        }
    }
    cout<<minimal<<endl<<maksimal<<endl;
    return 0;
}
