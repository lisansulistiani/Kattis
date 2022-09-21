#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int tc;
    double calories;
    cin>>tc;
    while(tc--)
    {
        double day;
        cin>>calories;
        day=ceil(calories/400);
        cout<<day<<endl;
    }
    return 0;
}
