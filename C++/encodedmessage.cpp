#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int tc;
    cin>>tc;
    string input;
    for(int i=0;i<tc;i++)
    {
        cin>>input;
        int rowcol=sqrt(input.length());
        char arr[rowcol][rowcol];
        int idx=0;
        for(int k=0;k<rowcol;k++)
        {
            for (int l=0;l<rowcol;l++)
            {
                arr[k][l]=input[idx];
                idx++;
            }
        }
        for(int k=rowcol-1;k>=0;k--)
        {
            for (int l=0;l<rowcol;l++)
            {
                cout<<arr[l][k];
            }
        }
        cout<<endl;

    }
    return 0;
}
