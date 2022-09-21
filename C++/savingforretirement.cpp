#include<iostream>
using namespace std;
int main()
{
    int b,br,bs,a,as;
    cin>>b>>br>>bs>>a>>as;
    int uangBob=(br-b)*bs;
    int uangAlice=0;
    int aa=0;
    while(uangAlice<=uangBob){
        uangAlice+=as;
        aa++;
    }
    cout<<aa+a<<endl;
    return 0;
}
