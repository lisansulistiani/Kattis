#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int v;
    cin>>v;
    if(v>=a){
        cout<<"A";
    }
    else if(v>=b){
        cout<<"B";
    }
    else if(v>=c){
        cout<<"C";
    }
    else if(v>=d){
        cout<<"D";
    }
    else if(v>=e){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    return 0;
}
