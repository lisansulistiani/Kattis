#include<iostream>
using namespace std;
int main(){
    int tc, t, d, last_t, last_d, times, distance,acc,max_acc;
    cin>>tc;
    last_t = 0;
    last_d = 0;
    max_acc = -1;
    for(int i=0;i<tc;i++){
        cin>>t>>d;
        times = t-last_t;
        distance = d-last_d;
        if(times==0){
            times=1;
        }
        acc = distance/times;
        
        if(acc>max_acc){
            max_acc = acc;
        }
        last_t = t;
        last_d = d;
    }
    cout<<max_acc<<endl;
    return 0;
}