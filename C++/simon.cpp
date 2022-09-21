#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int TC, maks;
    char a[1000];
    cin>>TC;
    cin.getline(a,sizeof(a));
    while(TC--)
    {
        cin.getline(a,sizeof(a));
        if(a[0]=='s' and a[1]=='i' and a[2]=='m' and a[3]=='o' and a[4]=='n' and a[5]==' ' and a[6]=='s' and a[7]=='a' and a[8]=='y' and a[9]=='s')
        {
            for (int k=11;k<cin.gcount()-1;k++)
            {
                cout<<a[k];
            }
            cout<<endl;
        }
        else
        {
            cout<<endl;
        }

    }
    return 0;
}
