#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string kartu[5];
    int maksimum=-1;
    int tampung=1;
    for(int i=0;i<5;i++)
    {
        cin>>kartu[i];
    }

    for (int i=0;i<4;i++)
    {
        for(int k=i+1;k<5;k++){
            if(kartu[i][0]==kartu[k][0])
            {
                tampung++;
            }
        }
        if(tampung>maksimum)
        {
            maksimum=tampung;
            if(maksimum>5)
            {
                maksimum=5;
            }

        }
        tampung=1;
    }
    cout<<maksimum<<endl;
    return 0;
}
