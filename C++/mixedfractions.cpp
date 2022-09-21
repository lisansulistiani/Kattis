#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(a!=0 and b!=0)
    {
        cout<<a/b<<" "<<a%b<<" / "<<b<<endl;
        cin>>a>>b;
    }
}