#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, char> a;
    map<char, int> b;
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
    a[26]='_';
    a[27]='.';
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
    b['_']=26;
    b['.']=27;
    int N;
    string X;
    cin>>N;

    while(N!=0)
    {
        cin>>X;
        for(int i=X.length()-1;i>=0;i--)
        {
            if((b[X[i]]+N)<28)
                cout<<a[b[X[i]]+N];
            else
                cout<<a[(b[X[i]]+N)%28];
        }
        cout<<endl;
        cin>>N;
    }
    return 0;
}
