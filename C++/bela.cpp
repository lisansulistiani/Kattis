#include<iostream>
using namespace std;
int dominant(char c)
{
    if(c=='A')
        return 11;
    else if(c=='K')
        return 4;
    else if(c=='Q')
        return 3;
    else if(c=='J')
        return 20;
    else if(c=='T')
        return 10;
    else if(c=='9')
        return 14;
    else
        return 0;
}
int notDominant(char c)
{
    if(c=='A')
        return 11;
    else if(c=='K')
        return 4;
    else if(c=='Q')
        return 3;
    else if(c=='J')
        return 2;
    else if(c=='T')
        return 10;
    else
        return 0;
}
int main()
{
    int N;
    char B;
    cin>>N>>B;
    int sum=0;
    int haha = 4*N;
    while(haha--)
    {
        string a;
        cin>>a;
        if(a[1]==B)
            sum+=dominant(a[0]);
        else
            sum+=notDominant(a[0]);
    }
    cout<<sum<<endl;
    return 0;
}
