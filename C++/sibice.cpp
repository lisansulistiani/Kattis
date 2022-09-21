#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int N, W, H;
    cin>>N>>W>>H;
    int sisi;
    sisi=(W*W)+(H*H);
    sisi=sqrt(sisi);
    int Ni;
    for(int i=0;i<N;i++)
    {
        cin>>Ni;
        if(Ni<=W || Ni<=H || Ni<=sisi)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NE"<<endl;
        }
    }

    return 0;
}
