#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int kasus;
    int id=1;
    cin>>kasus;
    while(kasus!=0){
        string arr[kasus];
        string a[kasus];
        for(int i=0;i<kasus;i++)
        {
            cin>>a[i];
        }
        //sort(a,a+kasus);
        int minLength=a[0].length();
        int maxLength=a[kasus-1].length();
        int i=0;
        if(kasus%2!=0){
        for(int k=0;k<kasus;k++)
        {
            arr[k]=a[i];
            int temp=(i+2);
            if(temp<kasus && i%2==0)
            {
                i+=2;
            }
            else if((i+2)>kasus){
                if(i+1<kasus){
                    i+=1;
                }
                else{
                    i-=1;
                }
            }
            else if((i)==kasus-1)
                i-=1;
            else
                i-=2;
        }
        }
        else
        {
            for(int k=0;k<kasus;k++)
        {
            arr[k]=a[i];
            int temp=(i+2);
            if(i==kasus-1 || i%2!=0)
                i-=2;
            else if(temp<kasus)
            {
                i+=2;
            }
            else if((i+2)>kasus-1){
                if(i+1<kasus){
                    i+=1;
                }

            }

        }
        }

        cout<<"SET "<<id<<endl;
        id++;
        for(int i=0;i<kasus;i++)
        {
            cout<<arr[i]<<endl;
        }
        cin>>kasus;
    }
    return 0;
}
