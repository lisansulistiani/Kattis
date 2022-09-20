#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    int expenses = 0;
    int exp;
    while(N--){
        cin>>exp;
        if(exp<0){
            expenses+=abs(exp);
        }
    }
    cout<<expenses;
    return 0;
}
