#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nilai;
int factorial(int angka)
{
    if(angka==1)
    {
        return 1;
    }
    else
    {
        return (angka*(factorial(angka-1)));
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int angka;
        cin>>angka;
        int nilai=factorial(angka);
        std::string s;
        std::stringstream out;
        out << nilai;
        s = out.str();
        cout<<s[s.length()-1]<<endl;
    }
    return 0;
}
