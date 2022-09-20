#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int H,v,miring;
    cin>>H>>v;
    miring=ceil(H/sin((v*M_PI)/180));
    cout<<miring<<endl;
    return 0;
}
