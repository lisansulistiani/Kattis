#include<iostream>
using namespace std;
int main()
{
    int tc;
    int r,e,c;
    cin>>tc;
    while(tc--)
    {
        cin>>r>>e>>c;
        if(r+c<e)
        {
            cout<<"advertise"<<endl;
        }
        else if(r+c==e)
        {
            cout<<"does not matter"<<endl;
        }
        else
        {
            cout<<"do not advertise"<<endl;
        }
    }
    return 0;
}
