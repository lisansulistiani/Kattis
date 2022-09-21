#include <iostream>
#include <bits/stdc++.h>
using  namespace std;
map<char, int> cost;
int main()
{
    string input;
    cost[' ']= 0;
    cost['&']=24;
    cost[',']= 7;
    cost['2']=22;
    cost['8']=23;
    cost['>']=10;
    cost['D']=26;
    cost['J']=18;
    cost['P']=23;
    cost['V']=19;
    cost['\\']=10;
    cost['b']=25;
    cost['h']=21;
    cost['n']=18;
    cost['t']=17;
    cost['z']=19;
    cost['!']= 9;
    cost['\'']= 3;
    cost['-']= 7;
    cost['3']=23;
    cost['9']=26;
    cost['?']=15;
    cost['E']=26;
    cost['K']=21;
    cost['Q']=31;
    cost['W']=26;
    cost[']']=18;
    cost['c']=17;
    cost['i']=15;
    cost['o']=20;
    cost['u']=17;
    cost['{']=18;
    cost['"']= 6;
    cost['(']=12;
    cost['.']= 4;
    cost['4']=21;
    cost[':']= 8;
    cost['@']=32;
    cost['F']=20;
    cost['L']=16;
    cost['R']=28;
    cost['X']=18;
    cost['^']= 7;
    cost['d']=25;
    cost['j']=20;
    cost['p']=25;
    cost['v']=13;
    cost['|']=12;
    cost['#']=24;
    cost[')']=12;
    cost['/']=10;
    cost['5']=27;
    cost[';']=11;
    cost['A']=24;
    cost['G']=25;
    cost['M']=28;
    cost['S']=25;
    cost['Y']=14;
    cost['_']= 8;
    cost['e']=23;
    cost['k']=21;
    cost['q']=25;
    cost['w']=19;
    cost['}']=18;
    cost['$']=29;
    cost['*']=17;
    cost['0']=22;
    cost['6']=26;
    cost['<']=10;
    cost['B']=29;
    cost['H']=25;
    cost['N']=25;
    cost['T']=16;
    cost['Z']=22;
    cost['`']= 3;
    cost['f']=18;
    cost['l']=16;
    cost['r']=13;
    cost['x']=13;
    cost['~']= 9;
    cost['%']=22;
    cost['+']=13;
    cost['1']=19;
    cost['7']=16;
    cost['=']=14;
    cost['C']=20;
    cost['I']=18;
    cost['O']=26;
    cost['U']=23;
    cost['[']=18;
    cost['a']=23;
    cost['g']=30;
    cost['m']=22;
    cost['s']=21;
    cost['y']=24;
    int total;
    while(true)
    {

        getline(cin,input);
        total=0;
        for(int i=0;i<input.length();i++)
        {
            total+=cost[input[i]];
        }
        if(cin.eof())
        {
            break;
        }
        else
            cout<<total<<endl;

    }
    return 0;
}
