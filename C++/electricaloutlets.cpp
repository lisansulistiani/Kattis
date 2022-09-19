#include<iostream>
using namespace std;
int main()
{
    int cases, powerStrips, outlets;
    cin>>cases;
    for (int i=0;i<cases;i++)
    {
        cin>>powerStrips;
        int appliances = 0;
        for (int k=0;k<powerStrips;k++)
        {
            cin>>outlets;
            appliances+=outlets;
        }
        cout<<appliances-(powerStrips-1)<<endl;

    }
    return 0;
}
