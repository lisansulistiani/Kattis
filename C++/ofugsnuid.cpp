#include<iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int ukuran[cases];
    for(int i=0;i<cases;i++)
    {
        cin>>ukuran[i];
    }
    for(int i=cases-1;i>=0;i--)
    {
        cout<<ukuran[i]<<endl;
    }
    return 0;
}
