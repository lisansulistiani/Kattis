#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    map <string,string> note;
    note["Ab minor"]="G# minor";
    note["Db minor"]="C# minor";
    note["Gb minor"]="F# minor";
    note["Bb minor"]="A# minor";
    note["Eb minor"]="D# minor";

    note["G# minor"]="Ab minor";
    note["C# minor"]="Db minor";
    note["F# minor"]="Gb minor";
    note["A# minor"]="Bb minor";
    note["D# minor"]="Eb minor";

    note["Ab major"]="G# major";
    note["Db major"]="C# major";
    note["Gb major"]="F# major";
    note["Bb major"]="A# major";
    note["Eb major"]="D# major";

    note["G# major"]="Ab major";
    note["C# major"]="Db major";
    note["F# major"]="Gb major";
    note["A# major"]="Bb major";
    note["D# major"]="Eb major";

    note["A major"]="UNIQUE";
    note["B major"]="UNIQUE";
    note["C major"]="UNIQUE";
    note["D major"]="UNIQUE";
    note["E major"]="UNIQUE";
    note["F major"]="UNIQUE";
    note["G major"]="UNIQUE";

    note["A minor"]="UNIQUE";
    note["B minor"]="UNIQUE";
    note["C minor"]="UNIQUE";
    note["D minor"]="UNIQUE";
    note["E minor"]="UNIQUE";
    note["F minor"]="UNIQUE";
    note["G minor"]="UNIQUE";

    for(int i=0;i<5;i++)
    {
        getline(cin,input);
        if(cin.eof())
            break;

        cout<<"Case "<<i+1<<": "<<note[input]<<endl;

    }
    return 0;
}
