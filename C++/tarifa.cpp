#include<iostream>
using namespace std;
int main()
{
    int X,N;
    cin>>X>>N;
    int next=0;
    for(int i=0;i<N;i++)
    {
        int Pi;
        cin>>Pi;
        next+=(X-Pi);
    }
    cout<<next+X<<endl;
    return 0;
}
