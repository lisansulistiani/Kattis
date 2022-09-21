#include<iostream>
using namespace std;
int main()
{
    int kasus,nilai;
    cin>>kasus;
    while(kasus--)
    {
        cin>>nilai;
        if(nilai%2==0)
        {
            cout<<nilai<<" is even"<<endl;
        }
        else
        {
            cout<<nilai<<" is odd"<<endl;
        }
    }
    return 0;
}
