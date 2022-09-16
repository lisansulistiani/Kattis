#include<iostream>
using namespace std;
int main()
{
    int X1,Y1,X2,Y2,X3,Y3;
    int X4,Y4;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    cin>>X3>>Y3;
    if(X1==X2 or X1==X3)
    {
        if(X1!=X2)
        {
            X4=X2;
        }
        else if(X1!=X3)
        {
            X4=X3;
        }
    }
    else if(X2==X3)
    {
        X4=X1;
    }
    cout<<X4<<" ";
    if(Y1==Y2 or Y1==Y3)
    {
        if(Y1!=Y2)
        {
            Y4=Y2;
        }
        else if(Y1!=Y3)
        {
            Y4=Y3;
        }
    }
    else if(Y2==Y3)
    {
        Y4=Y1;
    }
    cout<<Y4<<endl;
    return 0;
}
