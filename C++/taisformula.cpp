#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    double pertama[tc];
    double kedua[tc];
    for(int i=0;i<tc;i++)
    {
        cin>>pertama[i]>>kedua[i];
    }
    double total=0;
    double hitung=0;
    for(int i=tc-1;i>0;i--)
    {
        hitung=(((kedua[i]+kedua[i-1])/2)*(pertama[i]-pertama[i-1]))/1000;
        total+=hitung;
    }
    cout<<fixed<<setprecision(14)<<total<<endl;
    return 0;
}