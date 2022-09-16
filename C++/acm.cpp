#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string result;

    int idx1=0;
    int idx2=0;
    string benar[100];
    string salah[100];
    getline(cin,result);
    std::string delimiter = " ";
    std::string token = result.substr(0, result.find(delimiter));
    while(token!="-1")
    {
        string temp=result;
        size_t pos=0;
        while((pos = temp.find(delimiter)) != std::string::npos)
        {
            std::string tokens = temp.substr(0, pos);
            temp.erase(0, pos + delimiter.length());

        }
    std::string tokens = temp.substr(0, pos);
        if(tokens=="wrong")
        {
            salah[idx2]=result;
            idx2++;
        }
        else
        {
            benar[idx1]=result;
            idx1++;
        }
        getline(cin,result);
        token = result.substr(0, result.find(delimiter));
    }
    int timeTotal=0;
    for(int i=0;i<idx1;i++)
    {
        int timeTemp=0;
        string sementara=benar[i];
        string waktuString = sementara.substr(0, sementara.find(delimiter));
        int waktu=atoi(waktuString.c_str());
        timeTemp+=waktu;
        size_t pos=0;
        string temps=benar[i];
        std::string tokenss;
        while((pos = temps.find(delimiter)) != std::string::npos)
        {
            tokenss = temps.substr(0, pos);
            temps.erase(0, pos + delimiter.length());
        }

        for(int k=0;k<idx2;k++)
        {
            string temp=salah[k];
            size_t poss=0;
            std::string tokens;
            while((poss = temp.find(delimiter)) != std::string::npos)
            {
                tokens = temp.substr(0, poss);
                temp.erase(0, poss + delimiter.length());
            }
            if(tokenss==tokens)
            {
                timeTemp+=(20);
            }
        }
        timeTotal+=timeTemp;
    }
    cout<<idx1<<" "<<timeTotal<<endl;
    return 0;
}
