#include<iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    int score = 0;
    char ans[q];
    for(int i=0;i<q;i++){
        cin>>ans[i];
        if(i!=0){
            if(ans[i]==ans[i-1])
                score+=1;
        }
    }
    cout<<score;
    return 0;
}
