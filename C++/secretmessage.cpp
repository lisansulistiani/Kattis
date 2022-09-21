#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string line;
    cin>>tc;
    while(tc--)
    {
        cin>>line;
        int length = line.length();
        double ukuran = sqrt(length);
        int sz = ceil(ukuran);
        char arr[sz][sz];
        int idx=0;
        for (int i=0;i<sz;i++)
        {
            for(int k=0;k<sz;k++)
            {
                if(idx<length)
                {
                    arr[i][k]=line[idx];
                    idx++;
                }
                else
                {
                    arr[i][k]='*';
                }
            }
        }
        for (int i=0;i<sz;i++)
        {
            for(int k=sz-1;k>=0;k--)
            {
                if(arr[i][k]!='*')
                {
                    cout<<arr[k][i];
                    //cout<<arr[k][i];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
