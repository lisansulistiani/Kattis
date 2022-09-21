#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    float en=5280.;
    float ro=4854.;
    cin>>x;
    int a =(en/ro)*(x)*1000.+0.5;
    cout<<a<<endl;
    return 0;
}
