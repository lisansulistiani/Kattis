#include<iostream>
using namespace std;
int main(){
    int wc, hc,ws,hs;
    cin>>wc>>hc>>ws>>hs;

    if((ws<wc) && (hs<hc)){
            if(wc-ws>=1 && hc-hs>=1)
                cout<<1<<endl;
            else
                cout<<0<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
