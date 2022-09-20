#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    int idx=0;
    int occur=0;
    while(idx<input.length())
    {
        if(input[idx]=='s' && input[idx+1]=='s')
        {
            cout<<"hiss"<<endl;
            occur=1;
            break;
        }
        idx++;
    }
    if(occur==0)
    {
        cout<<"no hiss"<<endl;
    }
    return 0;
}
