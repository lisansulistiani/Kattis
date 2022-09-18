#include<iostream>
using namespace std;
int main()
{
    int M,N;
    cin>>M>>N;
    if(M==N)
    {
        cout<<M+1<<endl;
    }
    else if(M>N)
    {
        for(int i=N+1;i<=M+1;i++)
        {
            cout<<i<<endl;
        }
    }
    else if(M<N)
    {
        for (int i=M+1;i<=N+1;i++)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
