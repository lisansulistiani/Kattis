#include<iostream>
#include<string>
using namespace std;
int main()
{
    char text[100];
    cin>>text;
    string hasil="";
    hasil+=text[0];
    for (int i = 0;i<100;i++)
    {
        if(text[i]==45)
        {
            hasil+=text[i+1];
        }
    }
    cout<<hasil<<endl;
    return 0;
}
