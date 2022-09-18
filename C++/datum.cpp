#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {


    int m,d;
    cin>>d>>m;
    string arr[7];
    arr[6] = "Sunday";
    arr[0] = "Monday";
    arr[1] = "Tuesday";
    arr[2] = "Wednesday";
    arr[3] = "Thursday";
    arr[4] = "Friday";
    arr[5] = "Saturday";
    //if(m==1 || m==10)
    //{
        int idx=3;
        int start=1;
        int akhir;
        for(int k=1;k<=12;k++)
        {
            if(k==2)
            {
                akhir=28;
            }
            else if((k==1 || k==3 || k==5 || k==7 || k==8 || k==10 || k==12))
            {
                akhir=31;
            }
            else
            {
                akhir=30;
            }
            for(int i=1;i<=akhir;i++)
            {
                if(k==m && i==d)
                {
                    cout<<arr[idx]<<endl;
                    break;
                }
                else
                {
                    idx++;
                    if(idx>6)
                    {
                        idx=0;
                    }
                }
            }
        }
    //}

   return 0;
}
