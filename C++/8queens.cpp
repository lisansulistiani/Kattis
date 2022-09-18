#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checkSebaris(string arr)
{
    int banyakBintang=0;
    for(int i=0;i<arr.length();i++)
    {
        if(arr[i]=='*')
        {
            banyakBintang++;
            if(banyakBintang>1)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string arr[8];
    string temp;
    for(int i=0;i<8;i++)
    {
        getline(cin,arr[i]);
    }

    int trues=0;
    int queens=0;
    for(int i=0;i<8;i++)
    {
        for(int k=0;k<8;k++)
        {
            if(arr[i][k]=='*')
            {
                queens++;
            }
        }
    }
    if(queens!=8)
    {
        cout<<"invalid"<<endl;
        return 0;
    }
    for(int i=0;i<8;i++)
    {
        for(int k=0;k<8;k++)
        {
            if(arr[i][k]=='*')
            {
                if(checkSebaris(arr[i])==false)
                {
                    cout<<"invalid"<<endl;
                    trues=1;
                    break;
                }
                else
                {
                    //checkLurus
                    string tampung="";
                    for(int j=i;j<8;j++)
                    {
                        tampung+=arr[j][k];
                    }
                    if(checkSebaris(tampung)==false)
                    {
                        cout<<"invalid"<<endl;
                        trues=1;
                        break;
                    }
                    else
                    {
                        string temp="";
                        int baris=i;
                        int kolom=k;
                        while(baris<8 && kolom<8)
                        {
                            temp+=arr[baris][kolom];
                            baris++;
                            kolom++;
                        }
                        if(checkSebaris(temp)==false)
                        {
                            cout<<"invalid"<<endl;
                            trues=1;
                            break;
                        }
                        else
                        {
                            string temps="";
                            int bariss=i;
                            int koloms=k;
                            while(bariss<8 && koloms>=0)
                            {
                                temps+=arr[bariss][koloms];
                                bariss++;
                                koloms--;
                            }
                            if(checkSebaris(temps)==false)
                            {
                                cout<<"invalid"<<endl;
                                trues=1;
                                break;
                            }

                        }
                    }
                }

            }
        }
        if(trues==1)
            break;
    }
    if(trues==0)
    {
        cout<<"valid"<<endl;
    }

    return 0;
}
