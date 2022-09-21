#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int row,col;
        cin>>row>>col;
        char arr[row][col];
        for(int k=0;k<row;k++)
        {
            for(int l=0;l<col;l++)
            {
                cin>>arr[k][l];
            }
        }
        cout<<"Test "<<i<<endl;
        for(int k=row-1;k>=0;k--)
        {
            for(int l=col-1;l>=0;l--)
            {
                cout<<arr[k][l];
            }
            cout<<endl;
        }
    }
    return 0;
}
