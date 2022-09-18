#include<iostream>
using namespace std;
int main()
{
    int tc,i=0;
    cin>>tc;
    string satu[tc], dua[tc];
    while(i<tc)
    {
        cin>>satu[i];
        cin>>dua[i];
        int panjangsatu;
        panjangsatu=satu[i].length();
        for (int a=0;a<50;a++)
        {
            if(satu[a]!=dua[a])
            {
                cout<<"*";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}
