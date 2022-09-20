#include<iostream>
using namespace std;
int main(){
    int tc, total, l;
    cin>>tc;
    total = 0;
    int temp = tc - 1;
    while(tc--){
        cin>>l;
        total+=l;
    }
    total = total - temp;
    cout<<total;
    return 0;
}
