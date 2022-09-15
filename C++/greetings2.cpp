#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int countE=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='e')
        {
            countE+=1;
        }
    }
    cout<<"h";
    for(int i=0;i<countE*2;i++)
    {
        cout<<"e";
    }
    cout<<"y"<<endl;
    return 0;
}
