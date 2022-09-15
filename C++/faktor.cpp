#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double A, B, C;
    cin>>A>>B;
    for(int i = 0;i<(A*A)+(B*B);i++)
    {
        double temp=i/A;
        if(ceil(temp)==B){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
