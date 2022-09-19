#include<iostream>
#include<stdio.h>
#include<string>
#include<map>
#include<bits/stdc++.h>
using namespace std;
map<char, char>arr;
int main()
{
    string a;
    char arr[1000];
    arr['`']='`';
    arr['1']='`';
    arr['2']='1';
    arr['3']='2';
    arr['4']='3';
    arr['5']='4';
    arr['6']='5';
    arr['7']='6';
    arr['8']='7';
    arr['9']='8';
    arr['0']='9';
    arr['-']='0';
    arr['=']='-';
    arr['Q']='Q';
    arr['W']='Q';
    arr['E']='W';
    arr['R']='E';
    arr['T']='R';
    arr['Y']='T';
    arr['U']='Y';
    arr['I']='U';
    arr['O']='I';
    arr['P']='O';
    arr['[']='P';
    arr[']']='[';
    arr['\\']=']';
    arr['A']='A';
    arr['S']='A';
    arr['D']='S';
    arr['F']='D';
    arr['G']='F';
    arr['H']='G';
    arr['J']='H';
    arr['K']='J';
    arr['L']='K';
    arr[';']='L';
    arr['\'']=';';
    arr['Z']='Z';
    arr['X']='Z';
    arr['C']='X';
    arr['V']='C';
    arr['B']='V';
    arr['N']='B';
    arr['M']='N';
    arr[',']='M';
    arr['.']=',';
    arr['/']='.';
    arr[' ']=' ';
    arr['\n']='\n';
    //std::string a;
    //std::cin>>a;
    int idx=0;
    while(getline(cin,a)){
        for(int i=0;i<a.length();i++)
        {
            cout<<arr[a[i]];
        }
        cout<<endl;
    }


    return 0;
}
