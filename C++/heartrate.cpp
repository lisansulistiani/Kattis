#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        float b,p;
        cin>>b>>p;
        float bpm=(60*b)/p;
        float abpm = 60/p;
        float minAbpm = bpm-abpm;
        float maxAbpm = bpm+abpm;
        cout<<fixed<<setprecision(4)<<minAbpm<<" "<<bpm<<" "<<maxAbpm<<endl;
    }
    return 0;
}
