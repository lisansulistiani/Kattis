#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int total = 0;
    int temp=0;
    int t[N];
    if(N%2==0){
        int idx=0;
        while(idx<N){
            cin>>t[idx];
            idx++;
        }
        for(int i=1;i<N;i+=2){
            total+=(t[i]-t[i-1]);
        }
        cout<<total<<endl;
    }
    else{
        cout<<"still running"<<endl;
    }
    return 0;
}
