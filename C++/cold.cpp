#include<iostream>
using namespace std;
int main()
{
    int kasus,counter=0,suhu;
    cin>>kasus;
    while(kasus--)
    {
        cin>>suhu;
        if(suhu<0)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
