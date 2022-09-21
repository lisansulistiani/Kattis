#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> worth;
    worth['G']=3;
    worth['S']=2;
    worth['C']=1;
    map<int,string> cost;
    cost[8]="Province";
    cost[5]="Duchy";
    cost[2]="Estate";
    map<int,string> cost2;
    cost2[6]="Gold";
    cost2[3]="Silver";
    cost2[0]="Copper";
    int G, S, C;
    cin>>G>>S>>C;
    int totalWorth=(G*worth['G'])+(S*worth['S'])+(C*worth['C']);
    if(totalWorth>=8)
    {
        cout<<cost[8]<<" or ";
    }
    else if(totalWorth>=5)
    {
        cout<<cost[5]<<" or ";
    }
    else if(totalWorth>=2)
    {
        cout<<cost[2]<<" or ";
    }
    if(totalWorth>=6)
    {
        cout<<cost2[6]<<endl;
    }
    else if(totalWorth>=3)
    {
        cout<<cost2[3]<<endl;
    }
    else if(totalWorth>=0)
    {
        cout<<cost2[0]<<endl;
    }
    return 0;
}
