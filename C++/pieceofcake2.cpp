#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int hitungVolume(int h, int v)
{
    return 4*h*v;
}
int main()
{
    int n,h,v;
    cin>>n>>h>>v;
    int nilai1, nilai2, nilai3, nilai4;
    nilai1 = hitungVolume(h,v);
    nilai2 = hitungVolume(h,(n-v));
    nilai3 = hitungVolume((n-h),v);
    nilai4 = hitungVolume((n-h),(n-v));
    int nilaiMaksTemp1, nilaiMaksTemp2, nilaiMaks;
    nilaiMaksTemp1 = max(nilai1,nilai2);
    nilaiMaksTemp2 = max(nilai3,nilai4);
    nilaiMaks = max(nilaiMaksTemp1, nilaiMaksTemp2);
    cout<<nilaiMaks<<endl;
    return 0;
}
