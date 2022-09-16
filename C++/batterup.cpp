#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    double a,atas=0;
    double bawah=N;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        if(a>-1)
        {
            atas+=a;
        }
        else
        {
            bawah--;
        }
    }
    double hasil;
    hasil=atas/bawah;
    cout<<hasil<<endl;
    return 0;
}
