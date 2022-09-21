#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int position[n];
    for (int i=0;i<n;i++){
        cin>>position[i];
    }
    int q1,q2,q3;
    for (int i=0;i<q;i++){
        cin>>q1>>q2>>q3;
        if(q1==1){
            position[q2-1]=q3;
        }
        else{
            cout<<abs(position[q2-1]-position[q3-1])<<endl;
        }
    }

    return 0;
}
