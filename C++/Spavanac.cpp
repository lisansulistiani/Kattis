#include<iostream>
using namespace std;
int main()
{
    int H,M;
    cin>>H>>M;
    if(M>45)
    {
        M=M-45;
        cout<<H<<" "<<M<<endl;
    }
    else if(M<45)
    {
        M=60-(45-M);
        if(H==00)
        {
            H=24-(1-H);
        }
        else
        {
            H=H-1;
        }
        cout<<H<<" "<<M<<endl;
    }
    else
    {
        cout<<H<<" "<<M<<endl;
    }
    return 0;
}
