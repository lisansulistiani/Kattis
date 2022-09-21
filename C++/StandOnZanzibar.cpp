#include<iostream>
using namespace std;
int main()
{
    int tc, a, b, imigran;
    cin>>tc;
    while(tc--)
    {
        imigran=0;
        cin>>a;
        cin>>b;
        while(b!=0)
        {
            if(b>2*a)
            {
                imigran+=b-2*a;
            }
            a=b;
            cin>>b;
        }
        cout<<imigran<<endl;

    }
    return 0;
}
