#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string month;
    string day, year;
    int hours, minute, hours1, minute1,a;
    cin>>month>>day>>year;
    while(!cin.eof())
    {
        scanf("%d:%d %d:%d", &hours,&minute,&hours1,&minute1);
        int hourss, minutee;
        if(minute1>=minute)
        {

            minutee=minute1-minute;
            hourss=hours1-hours;

        }
        else if(minute>minute1)
        {
            minutee=60-(minute-minute1);
            hourss=hours1-(hours+1);
        }
        cout<<month<<" "<<day<<" "<<year<<" "<<hourss<<" hours "<<minutee<<" minutes"<<endl;
        cin>>month>>day>>year;
    }


    return 0;
}
