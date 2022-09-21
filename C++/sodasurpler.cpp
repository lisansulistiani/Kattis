#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,f,c;
    cin>>e>>f>>c;
    int botolKosong=e+f;
    int hasil=0;
    while((botolKosong/c)>0) //9/3 = 3
    {
        int temp=botolKosong/c;
        hasil+=botolKosong/c; //0 = 3
        botolKosong=(botolKosong-((botolKosong/c)*c))+temp;  //9-0+3
    }
    cout<<hasil<<endl;
    return 0;
}
