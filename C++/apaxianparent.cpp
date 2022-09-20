#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    if(a[a.length()-1]=='e'){
        cout<<a<<"x"<<b<<endl;
    }
    else if(a[a.length()-1]=='a' || a[a.length()-1]=='i' || a[a.length()-1]=='o' || a[a.length()-1]=='u')
    {
        a[a.length()-1]='e';
        cout<<a<<"x"<<b<<endl;
    }
    else if(a[a.length()-2]=='e' && a[a.length()-1]=='x')
    {
        cout<<a<<b<<endl;
    }
    else{
        cout<<a<<"ex"<<b<<endl;
    }

    return 0;
}

