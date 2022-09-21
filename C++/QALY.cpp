#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    float tampung = 0;
    while(N--)
    {
        float q,y;
        cin>>q>>y;
        tampung+=(q*y);
    }
    cout<<std::fixed<<setprecision(3)<<tampung<<endl;
    return 0;
}
