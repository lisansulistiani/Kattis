#include<iostream>
using namespace std;
int main(){
    int s,t,n;
    cin>>s>>t>>n;
    int d[n+1],b[n],c[n];
    for (int i=0;i<=n;i++){
        cin>>d[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        cin>>c[i];
    }
    int times =0;
    for (int i=0;i<=n;i++){
        if(i!=n){
            if(d[i]<c[i]){
                times+=c[i]+b[i];
            }
            else if(d[i]>c[i]){
                times+=d[i]+b[i];
            }
        }
        else{
            times+=d[i];
        }
    }
    if(times>t){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
    return 0;
}
