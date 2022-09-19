#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<int,char> a;
map<char,int> b;
int main()
{
    a[0]='A';
    a[1]='B';
    a[2]='C';
    a[3]='D';
    a[4]='E';
    a[5]='F';
    a[6]='G';
    a[7]='H';
    a[8]='I';
    a[9]='J';
    a[10]='K';
    a[11]='L';
    a[12]='M';
    a[13]='N';
    a[14]='O';
    a[15]='P';
    a[16]='Q';
    a[17]='R';
    a[18]='S';
    a[19]='T';
    a[20]='U';
    a[21]='V';
    a[22]='W';
    a[23]='X';
    a[24]='Y';
    a[25]='Z';

    b['A']=0;
    b['B']=1;
    b['C']=2;
    b['D']=3;
    b['E']=4;
    b['F']=5;
    b['G']=6;
    b['H']=7;
    b['I']=8;
    b['J']=9;
    b['K']=10;
    b['L']=11;
    b['M']=12;
    b['N']=13;
    b['O']=14;
    b['P']=15;
    b['Q']=16;
    b['R']=17;
    b['S']=18;
    b['T']=19;
    b['U']=20;
    b['V']=21;
    b['W']=22;
    b['X']=23;
    b['Y']=24;
    b['Z']=25;

    string message;
    cin>>message;
    string calonkey;
    cin>>calonkey;
    int newMerged;
    int defaults=0;
    string calon;

    while(calonkey.length()<message.length())
    {
        calon=calonkey;
        for(int i=defaults;i<calonkey.length();i++)
        {
            newMerged=(b[calonkey[i]]-b[message[i]]-26);
            newMerged=abs(newMerged)%26;
            calon+=a[newMerged];
        }
        defaults=calonkey.length();
        calonkey=calon;
    }
    for(int i=0;i<message.length();i++)
    {
        newMerged=(b[calonkey[i]]-b[message[i]]-26);
        newMerged=abs(newMerged)%26;
        cout<<a[newMerged];
    }
    cout<<endl;
}
