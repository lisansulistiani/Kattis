#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int arr[tc];
    for(int i=0;i<tc;i++){
        cin>>arr[i];
    }
    int idx=0;
    int sama=0;
    for(int i=1;i<=arr[tc-1];i++){
        if(arr[idx]!=i && arr[idx]>i){
            sama++;
            cout<<i<<endl;
        }
        else if(arr[idx]==i)
        {
            idx++;
        }
    }
    if(sama==0){
        cout<<"good job"<<endl;
    }

    return 0;
}
