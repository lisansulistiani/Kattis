#include<iostream>
using namespace std;
int main()
{
    int a1,b1,a2,b2,gunnar,emma;
    cin>>a1>>b1>>a2>>b2;
    gunnar=a1+b1+a2+b2;
    cin>>a1>>b1>>a2>>b2;
    emma=a1+b1+a2+b2;
    if(gunnar>emma)
    {
        cout<<"Gunnar"<<endl;
    }
    else if (gunnar<emma)
    {
        cout<<"Emma"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
    }
    return 0;
}
