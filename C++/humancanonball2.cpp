#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        float v0, tetha, x1, h1, h2;
        cin>>v0>>tetha>>x1>>h1>>h2;
        h1+=1;
        h2-=1;
        //x(t)=v0*t*cos tetha
        //y(t)=v0*t*sin tetha - 0,5*g*t^2
        //g=9,81
        float cosTetha = cos((tetha*M_PI)/180);
        float sinTetha = sin((tetha*M_PI)/180);
        float t = x1/(v0*cosTetha);
        float y = (v0*t*sinTetha)-(0.5*9.81*(t*t));
        if(y>h1 && y<h2)
            cout<<"Safe"<<endl;
        else
            cout<<"Not Safe"<<endl;
    }
    return 0;
}