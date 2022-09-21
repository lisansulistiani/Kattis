#include<iostream>
#include<cmath>
using namespace std;
const int power(int bil, int pangkat1)
{
    return pangkat1==0 ? 1 : bil * power(bil,pangkat1-1);
}
int main()
{
    long long int nilai,biner[32],counter=0,hasil=0;
    cin>>nilai;
    for (int i=0;i<=32;i++)
    {
        if(nilai>=(pow(2,i)))
        {
            counter++;
        }
    }
    for (int k=counter-1;k>=0;k--)
    {
        if(nilai>=pow(2,k))
        {
            biner[k]=1;
            nilai-=power(2,k);
        }
        else
        {
            biner[k]=0;
        }
    }
    for (int x=0;x<counter;x++)
    {
        hasil+=(biner[x]*(power(2,(counter-1-x))));
    }
    cout<<hasil<<endl;
    return 0;
}
