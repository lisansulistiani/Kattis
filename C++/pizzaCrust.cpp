#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int R,C;
    cin>>R>>C;
    double CR,Keliling,CA,division,percent;
    CR=R-C;
    Keliling=M_PI*R*R;
    CA=M_PI*CR*CR;
    division=(CA/Keliling);
    percent=division*100;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(6)<<percent<<endl;
    return 0;
}
