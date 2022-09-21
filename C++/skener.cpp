#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R,C,Zr,Zc;
    cin>>R>>C>>Zr>>Zc;
    string arr[R][C];
    string inp;
    string arr2[R];
    for(int i=0;i<R;i++)
    {
        cin>>inp;
        for(int k=0;k<C;k++){
            arr[i][k]=inp[k];
        }
    }
    string newArr[R*Zr][C*Zc];
    for(int i=0;i<R;i++)
    {
        for(int m=0;m<Zr;m++){
            for(int k=0;k<C;k++)
            {
                for(int l=0;l<Zc;l++)
                {
                    newArr[i][k]=arr[i][k];
                    cout<<newArr[i][k];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
