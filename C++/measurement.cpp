#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(12);
    double angka;
    string awal;
    string in;
    string akhir;
    double jawaban;
    cin>>angka>>awal>>in>>akhir;
    map<string, unsigned int> thous;
    thous["thou"]=1;
    thous["th"]=1;
    thous["inch"]=1000;
    thous["in"]=1000;
    thous["foot"]=12000;
    thous["ft"]=12000;
    thous["yard"]=36000;
    thous["yd"]=36000;
    thous["chain"]=792000;
    thous["ch"]=792000;
    thous["furlong"]=7920000;
    thous["fur"]=7920000;
    thous["mile"]=63360000;
    thous["mi"]=63360000;
    thous["league"]=190080000;
    thous["lea"]=190080000;
    jawaban=angka*thous[awal]/thous[akhir];
    cout<<jawaban<<endl;
    return 0;
}
