#include<iostream>
using namespace std;
int main()
{
    int tc=10,nilai,hasil[10],counter=0,check=0;
    while(tc--)
    {
        cin>>nilai;
        hasil[tc]=nilai%42;
    }
    for (int i=0;i<10;i++)
    {
        check=0;
        for (int k=i+1;k<10;k++)
        {
            if(hasil[i]==hasil[k])
            {
                check++;
            }
        }
        if(check==0)
        {
            counter++;
        }

    }
    if(counter==0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<counter<<endl;
    }

    return 0;
}
